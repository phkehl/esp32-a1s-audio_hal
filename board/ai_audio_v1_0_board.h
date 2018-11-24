// code from https://github.com/donny681/esp-adf/blob/master/components/audio_hal/board/ai_audio_v1_0_board.h
/*
 * ESPRESSIF MIT License
 *
 * Copyright (c) 2018 <ESPRESSIF SYSTEMS (SHANGHAI) PTE LTD>
 *
 * Permission is hereby granted for use on all ESPRESSIF SYSTEMS products, in which case,
 * it is free of charge, to any person obtaining a copy of this software and associated
 * documentation files (the "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the Software is furnished
 * to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or
 * substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */

#ifndef _AI_AUDIO_V1_0_BOARD_H_
#define _AI_AUDIO_V1_0_BOARD_H_

#ifdef __cplusplus
extern "C" {
#endif

/* SD card related */
#define SD_CARD_INTR_GPIO           GPIO_NUM_34
#define SD_CARD_INTR_SEL            GPIO_SEL_34
#define SD_CARD_OPEN_FILE_NUM_MAX   5

//#define GPIO_AUXIN_DETECT           39

// LED indicators
#define GPIO_LED_GREEN              GPIO_NUM_22
//#define GPIO_LED_RED                -1

// I2C gpios
#define IIC_CLK                     GPIO_NUM_32
#define IIC_DATA                    GPIO_NUM_33

// I2S GPIOs
#define IIS_SCLK                    GPIO_NUM_27
#define IIS_LCLK                    GPIO_NUM_26
#define IIS_DSIN                    GPIO_NUM_25
#define IIS_DOUT                    GPIO_NUM_35

/* PA */
#define GPIO_PA_EN                  GPIO_NUM_21
#define GPIO_SEL_PA_EN              GPIO_SEL_21

// buttons
#define KEY1_SEL                    GPIO_SEL_36
#define KEY1_GPIO                   GPIO_NUM_36
#define KEY2_SEL                    GPIO_SEL_13
#define KEY2_GPIO                   GPIO_NUM_13
#define KEY3_SEL                    GPIO_SEL_19
#define KEY3_GPIO                   GPIO_NUM_19
#define KEY4_SEL                    GPIO_SEL_23
#define KEY4_GPIO                   GPIO_NUM_23
#define KEY5_SEL                    GPIO_SEL_18
#define KEY5_GPIO                   GPIO_NUM_18
#define KEY6_SEL                    GPIO_SEL_5
#define KEY6_GPIO                   GPIO_NUM_5

#ifdef __cplusplus
}
#endif

#endif
