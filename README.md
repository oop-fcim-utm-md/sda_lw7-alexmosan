# SDA, лабораторная работа 7

## Задание ##
Pеализовать массив структур, используя заданную структуру данных.

Для массива из элементов-структур, каждый из которых имеет вид:
<br><code>
struct data_t
{
  int id_;
  char name_ [50];
};
</code><br>
написать следующие функции.

1. **initialize** - инициализирует новый массив данными из заданного массива, для этого по необходимости предварительно выделяет ресурсы (память).
2. **print** - помещает данные из всех элементов массива по очереди в поток *stdout*.
3. **clear** - очищает массив, при необходимости освобождая задействованные для него ресурсы.
4. **get_one** - возвращает элемент массива по заданному индексу, индекст может быть как положительным, как и отрицательным; необходимо проверять, если индекс превышает размер массива: если индекс отрицательный, считать элементы с конца, если положительный - с начала, при превышении размера возвращать последний элемент с начала или конца, в зависимости от знака индекса. 
Например, для списка чисел [1, 5, 9, 14] индексы -1 и 10 вернут элемент 14, ниже представлено еще несколько примеров для этого списка:

|индекс|возвращаемый элемент|
|---|---|
|`0`|1|
|`2`|9|
|`5`|14|
|`-10`|1|
|`-2`|9|

5. **insert_one** - вставка элемента в любое место массива, с сохранением последовательности других элементов, при этом индекс не может быть отрицательным; если индекс больше размера текущего массива, элемент вставляется в конец.
6. **erase_one** - удаление элемента из любого места массива, с сохранением последовательности других элементов, при этом индекс не может быть отрицательным; если индекс больше размера текущего массива, элемент удаляется с конца.

Файлы _header.h_ и _main.cpp_ оставлять без изменений.

## С чего начать
1. Скачайте последнюю версию git по ссылке: https://git-scm.com/downloads
2. Зарегистрируйтесь на github: https://github.com/
3. Создайте папку на компьютере для всех лабораторных, в которой необходимо инициализировать git одним из доступных способов (Git GUI, Git Bash, VSCode).

## Как работать с git
Используя этот репозиторий как пример:
1. Скопируйте код на свой компьютер с помощью команды*<br><br>
**git clone https://github.com/oop-fcim-utm-md/sda_lw7-<ваше имя пользователя>.git**<br><br>
*ссылка на репозиторий берется во вкладке* **<> Code** *на странице репозитория в github*<br>
*это автоматически инициализирует git с веткой* main *в папке с локальной версией репозитория*<br>
**требует авторизации (если через браузер не получается, необходимо сгенерировать Github [Personal Access Token](https://docs.github.com/en/authentication/keeping-your-account-and-data-secure/creating-a-personal-access-token))*
2. После того, как внесете значительные изменения в код, cохраните их с помощью команды<br><br>
**git commit -am "commit message"**<br><br>
*где* -am - *это дополнительные параметры, обозначающие выполнение команд add и message*<br>
*в кавычках следует писать сообщение о сути изменений в новой версии репозитория, которую вы создаете таким образом*
3. Для синхронизации файлов на github с локальными используйте команду*<br><br>
**git push origin main**<br><br>
*где* origin - *это указатель на удаленную ветку (точка назначения), а* main - *на локальную (источник)*<br>
**требует авторизации*
