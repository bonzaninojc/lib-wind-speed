
# Biblioteca de Medição de Velocidade do Vento.

A Biblioteca de Medição de Velocidade do Vento é uma ferramenta que permite medir a velocidade do vento em diferentes unidades de medida. Essa biblioteca é desenvolvida para uso em projetos que envolvam a coleta de dados meteorológicos, estudos ambientais, monitoramento climático e outras aplicações relacionadas.



Informações e recursos:
- Medição precisa da velocidade do vento
- Suporte para a unidade de medida quilômetros por hora (km/h).
- Configuração flexível para diferentes dispositivos de medição de vento, como anemômetros, sensores de pressão diferencial ou outros dispositivos compatíveis.




## Como instalar

![App Screenshot](https://www.robocore.net/upload/tutoriais/32_img_2_H.png)


## Como utilizar

```
#include "lib_wind_speed.h"

// Pino de conexão do anemômetro
const int ANEMOMETER_PIN = 2;

// Instância da biblioteca
LibWindSpeed windSpeedSensor(ANEMOMETER_PIN);

void setup() {
  // Inicializa a comunicação com o anemômetro
  windSpeedSensor.begin();

  // Configurações adicionais do setup
  // ...
}

void loop() {
  // Atualiza a leitura da velocidade do vento
  windSpeedSensor.update();

  // Obtém a velocidade do vento em quilometros por hora
  float windSpeed = windSpeedSensor.getWindSpeed();

  // Faça o que for necessário com a velocidade do vento
  // ...

  delay(1000); // Aguarda 1 segundo antes da próxima leitura
}