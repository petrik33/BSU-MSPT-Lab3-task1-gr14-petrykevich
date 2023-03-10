# Overview

## Mobile Software Programming Technologies. Lab 3. Task 1

Lab work is intended to learn such skills and technologies as Continious Integration / Development with Make utility, GitHub actions and Repl.it environment

## Usage

1. Познакомьтесь с руководством Руководство по созданию проекта в Github и
Repl.it по созданию репозитория и активации аккаунта для сервиса repl.it.
2. Создайте репозиторий из шаблона репозитория согласно рекомендациям
руководства из п. 1 текущего задания. В качестве имени репозитория введите
имя согласно шаблону lab3-task1-gr13-petrov, указав корректно номер
своей группы и фамилию вместо petrov.
3. Импортируйте проект в repl.it согласно рекомендациям из руководства в п. 1
текущего задания. Далее все изменения выполняются в среде repl.it и
публикуются на github.
4. Создать ветку в репозитории для данной задачи согласно Требования к
репозиториям, например development, и переключиться в неё. Все изменения
по проекту выполнять в новой ветке!
5. Отредактируйте файл Readme в созданном проекте, изменив текст в разделах
Overview, Usage, Building. Добавьте в Readme свою фамилию, имя и номер
подгруппы вместо текста {add your last name, first name and group number}.
Закоммитить изменения.
6. Переименовать файл hello.c, например в main.c.
7. Отредактировать файл .replit и указать название файла, который
компилируется, например main.c, и имя бинарного файла, например
labrabota3-1, а так же путь к этому файлу. Т.е. отредактировать строку run =
"gcc -o hello /home/runner/project2/src/hello.c" к виду, например,
"gcc -o labrabota3-1
/home/runner/lab3-task1-gr13-petrov/src/main.c", где labrabota3-1
— это исполняемый файл,
/home/runner/lab3-task1-gr13-petrov/src/main.c — пусть к исходному
файлу с учётом, что /home/runner/ — домашний каталог, lab3-task1-gr13-
petrov/ — каталог проекта из Вашего репозитория, совпадающий с названием
репозитория. Проверить путь к текущему каталогу можно командой pwd на
вкладке Shell в repl.it (см. п. 16 в руководстве из пункта 1).
8. Отредактировать .gitignore и указать имя бинарного файла, который должен
получиться в результате labrabota3-1 и который не должен быть опубликован
в репозиторий, т. е. Проигнорирован при публикации измений.
9. Закоммитить изменения и опубликовать их в репозиторий на github.
10. Изучить документацию Стандарты кодирования для оформления кода и при
разработке программы применить правила оформления кода согласно
стандартам.
11. Коммитить изменения в репозиторий пошагово, например добавили новую
функцию, проверили, коммитим.
12. В каждом задании указано, какую подзадачу должна решать разрабатываемая
функция. Исходные данные программа получает через аргументы командной
строки. Если в задании необходимо в качестве исходных данных использовать
массивы, их нужно сформировать с помощью генератора псевдослучайных
чисел (размерности массивов программа получает через аргументы командной
строки). На экран вывести исходные данные и полученные результаты.
13. Провести тесты (контрольный расчет) для проверки работоспособности
алгоритма решения задачи и включить их в отчёт.
14. После завершения работы над заданием опубликовать изменения в
репозиторий, т. е. выполнить git push.
15. Переключиться в репозиторий на github и, используя pull request, слить
изменения из ветки development в ветку master (см. Как сделать pull request на
Github).

Task:

Дан массив натуральных чисел размерности n. Вывести на печать все числа
этого массива, являющиеся степенями пяти. Функция должна проверять, является
число степенью пяти или нет.

Author: Tsimafei Petrykevich - Group 14

## Building

Built with Repl.it tools and Make utility

## Additional Notes

Links to other tasks:

* [Task 2](https://github.com/petrik33/MSPT-Lab3-task2-gr14-petrykevich)
* [Task 3](https://github.com/fpmi-tp2023/labrabota3-z3-gr14a-petrik33/blob/main/README.md)
* [Task 4](https://github.com/fpmi-tp2023/labrabota3-z4-gr14a-petrik33)
* [Report](https://docs.google.com/document/d/1YP7zU5jJUng0uOEat3KCHMhP-xirml5iTl8I-sMQius/edit?usp=sharing)
* [Tests](https://github.com/petrik33/BSU-MSPT-Lab3-task1-gr14-petrykevich/blob/master/docs/test.md)
