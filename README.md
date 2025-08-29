 Calculadora de Resistencias con ESP32 y Pantalla TFT

Este proyecto muestra una resistencia de 3 bandas en una pantalla **TFT** utilizando la librería [TFT_eSPI](https://github.com/Bodmer/TFT_eSPI).  
Con dos botones puedes seleccionar la banda a modificar y cambiar su color. Automáticamente se muestra el valor de la resistencia calculado en Ω, kΩ o MΩ.

## ✨ Características

- Interfaz gráfica en pantalla TFT con menú de selección de colores (3x3).
- Selección visual de la banda actual (cuadro blanco alrededor de la banda).
- Cálculo automático del valor de la resistencia en base a las bandas.
- Visualización del valor centrado en la parte superior, en unidades **Ω, kΩ o MΩ**.
- Fácil de usar con solo **2 botones**:
  - **Botón 1 (BTN_BANDA):** Cambia la banda seleccionada (1 → 2 → 3).
  - **Botón 2 (BTN_COLOR):** Cambia el color de la banda seleccionada.

## 🛠️ Hardware utilizado

- **ESP32**
- **Pantalla TFT** compatible con la librería TFT_eSPI
- **2 botones** conectados a GPIO
- Resistencias pull-up internas activadas por software

## ⚡ Conexiones

- `BTN_COLOR` → GPIO 22  
- `BTN_BANDA` → GPIO 2  
- Pantalla TFT → Según configuración de tu `User_Setup.h` en **TFT_eSPI**

> ⚠️ Asegúrate de configurar correctamente los pines de la pantalla en la librería **TFT_eSPI** antes de compilar.

## 📷 Captura de pantalla (ejemplo)


![WhatsApp Image 2025-08-28 at 11 22 12 PM](https://github.com/user-attachments/assets/079e76f7-7ac1-47ce-83b1-d8044c2dde4c)

