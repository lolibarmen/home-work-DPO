#!/usr/bin/env bash

echo "Компиляция всех .cpp файлов..."

for cpp_file in *.cpp; do
    if [ -f "$cpp_file" ]; then
        base_name="${cpp_file%.cpp}"
        echo "Компилирую: $cpp_file -> $base_name"
        g++ -std=c++11 "$cpp_file" -o "$base_name"
        if [ $? -eq 0 ]; then
            echo "✓ Успешно: $base_name"
        else
            echo "✗ Ошибка при компиляции: $cpp_file"
        fi
    fi
done

echo "Готово!"
