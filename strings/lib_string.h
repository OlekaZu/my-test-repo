#ifndef SRC_S21_STRING_H_
#define SRC_S21_STRING_H_

typedef unsigned s21_size_t;
#define null ((void *)0)

//  ===== PART 1 Author: aedie =====
// 1. Выполняет поиск первого вхождения символа c (беззнаковый тип) в первых n
// байтах строки, на которую указывает аргумент str.
void *s21_memchr(const void *str, int c, s21_size_t n);
// 2. Сравнивает первые n байтов str1 и str2.
int s21_memcmp(const void *str1, const void *str2, s21_size_t n);
// 3. Копирует n символов из src в dest.
void *s21_memcpy(void *dest, const void *src, s21_size_t n);
// 4. Еще одна функция для копирования n символов из str2 в str1.
void *s21_memmove(void *dest, const void *src, s21_size_t n);
// 5. Копирует символ c (беззнаковый тип) в первые n символов строки, на которую
// указывает аргумент str.S
void *s21_memset(void *str, int c, s21_size_t n);

// //  ===== PART 2 Author: fbillye =====
// //  6. Добавляет строку, на которую указывает src, в конец строки, на которую
// //  указывает dest.
// char *s21_strcat(char *dest, const char *src);
// //  7. Добавляет строку, на которую указывает src, в конец строки, на которую
// //  указывает dest, длиной до n символов.
// char *s21_strncat(char *dest, const char *src, s21_size_t n);
// //  8. Выполняет поиск первого вхождения символа c (беззнаковый тип) в
// строке,
// //  на которую указывает аргумент str.
// char *strchr(const char *str, int c);
// //  9. Сравнивает строку, на которую указывает str1, со строкой, на которую
// //  указывает str2.
// int s21_strcmp(const char *str1, const char *str2);
// //  10. Сравнивает не более первых n байтов str1 и str2.
// int s21_strncmp(const char *str1, const char *str2, s21_size_t n);

// //  ===== PART 3 Author:  dtammie =====
// //  11. Копирует строку, на которую указывает src, в dest.
// char *s21_strcpy(char *dest, char *src);
// //  12. Копирует до n символов из строки, на которую указывает src, в dest.
// char *strncpy(char *dest, const char *src, s21_size_t n);
// //  13. Вычисляет длину начального сегмента str1, который полностью состоит
// из
// //  символов, не входящих в str2.
// s21_size_t strcspn(const char *str1, const char *str2);
// //  14. Выполняет поиск во внутреннем массиве номера ошибки errnum и
// возвращает
// //  указатель на строку с сообщением об ошибке.
// char *strerror(int errnum);
// //  15. Вычисляет длину строки str, не включая завершающий нулевой символ.
// s21_size_t s21_strlen(const char *str);

// //  ===== PART 4 Author: ncarolyn =====
// //  16. Находит первый символ в строке str1, который соответствует любому
// //  символу, указанному в str2.
// char *s21_strpbrk(const char *str1, const char *str2);
// //  17. Выполняет поиск последнего вхождения символа c (беззнаковый тип) в
// //  строке, на которую указывает аргумент str.
// char *s21_strrchr(const char *str, int c);
// //  18. Вычисляет длину начального сегмента str1, который полностью состоит
// из
// //  символов str2.
// s21_size_t s21_strspn(const char *str1, const char *str2);
// //  19. Находит первое вхождение всей строки needle (не включая завершающий
// //  нулевой символ), которая появляется в строке haystack.
// char *s21_strstr(const char *haystack, const char *needle);
// //  20. Разбивает строку str на ряд токенов, разделенных delim.
// char *s21_strtok(char *str, const char *delim);

// //  ===== PART 5 sprintf & sscanf =====
// //  Считывает форматированный ввод из строки
// //  Отправляет форматированный вывод в строку, на которую указывает str.

// //  ===== BONUS PART =====
// //  Возвращает копию строки (str), преобразованной в верхний регистр. В
// случае
// //  какой-либо ошибки следует вернуть значение NULL
// void *to_upper(const char *str);
// //  Возвращает копию строки (str), преобразованной в нижний регистр. В случае
// //  какой-либо ошибки следует вернуть значение NULL
// // void *to_lower(const char *str);
// //  Возвращает новую строку, в которой указанная строка (str) вставлена в
// //  указанную позицию (start_index) в данной строке (src). В случае
// какой-либо
// //  ошибки следует вернуть значение NULL
// // void *insert(const char *src, const char *str, size_t start_index);
// //  Возвращает новую строку, в которой удаляются все начальные и конечные
// //  вхождения набора заданных символов (trim_chars) из данной строки (src). В
// //  случае какой-либо ошибки следует вернуть значение NULL
// // void *trim(const char *src, const char *trim_chars);

#endif  // SRC_S21_STRING_H_
