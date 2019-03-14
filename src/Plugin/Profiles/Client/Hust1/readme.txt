опис структури файлу relay.json


IncReport.json
"ClassRef":"Grafana"
Запис даних в базу MySQL для відображення графіків у Grafana

IncReport.json
"ClassRef":"Telegram"
Відправлення критичних подій і помилок в месенджер Telegram

IncGroup.json
"ClassRef":"GroupOnStart"
Група класів що спрацьовує на виключенні і виключенні системи
Виключає всі реле

IncGroup.json
"ClassRef":"GroupOnValue"
Група класів що спрацьовує при зміні значення
Відображає на екран, відправляє дані в інтернет для малювання графіків

IncTimer.json
"ClassRef":"Sleep_1"
Головний таймер паузи в циклі опитування класів.
(1 секунда)

IncTimer.json
"ClassRef":"SensorTRD_Light"
Добовий Таймер включення освітлення "штучний день".
(з АА год до ББ год)

IncTimer.json
"ClassRef":"SensorTRD_Humid"
Добовий таймер включення обрискувачів вологості.
(з АА год до ББ год), (з ВВ год до ГГ год)

IncTimer.json
"ClassRef":"SensorTRC_Air"
Циклічний таймер включення вентиляції.
(А хв вкл, Б хв викл)

IncTimer.json
"ClassRef":"SensorTRDFW_Temper"
Добовий синусоїдний генератор температури
(з АА год до ББ год темература плавно наростає до значення ВВ і спадає до значення ГГ)
звязаний з датчиком температури DH2_Sensor_Temper

IncTimer.json
"ClassRef":"SensorTRC_Flash"
Циклічний таймер тесту реле.
(А сек вкл, Б сек викл)

IncSolar.json
"ClassRef":"SensorSun"
Віртуальний сенсор висоти сонця над горизонтом

IncRasPi.json
"ClassRef":"SensorUptimeSys"
Час безперервної роботи мікрокомпютера

IncRasPi.json
"ClassRef":"Sensor_Pi_CPUTemp"
Сенсор температури процесора мікрокомпютера

IncRasPi.json
"ClassRef":"SensorUps"
Сенсор напруги в лінії 220в

IncDh1.json
"ClassRef":"DH1_Sensor_Humid"
Сенсор Вологості вулиці
"ClassRef":"DH1_Sensor_Temper"
Сенсор температури вулиці

IncDh2.json
"ClassRef":"DH2_Sensor_Humid"
Сенсор Вологості в маточнику
"ClassRef":"DH2_Sensor_Temper"
Сенсор температури в маточнику. 
Зєднаний з SensorTRDFW_Temper

IncDh3.json
"ClassRef":"DH3_Sensor_Humid"
Сенсор Вологості в інкубаторі
"ClassRef":"DH3_Sensor_Temper"
Сенсор температури в інкубаторі
Надсилає критичні температури на телеграм
