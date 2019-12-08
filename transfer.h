#ifndef TRANSFER_PROTOCOL_LIBRARY_H
#define TRANSFER_PROTOCOL_LIBRARY_H

enum Command
{
	EC_IntroduceME = 0, // Сообщить о своём присутствии
	EC_SignRequest = 1, // Отправить данные на подпись
	EC_SignResponse = 2 // Получить подпись
};

#endif