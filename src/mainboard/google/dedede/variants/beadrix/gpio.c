/* SPDX-License-Identifier: GPL-2.0-or-later */

#include <baseboard/gpio.h>
#include <baseboard/variants.h>

/* Pad configuration in ramstage */
static const struct pad_config gpio_table[] = {
	/* A11 : TOUCH_RPT_EN ==> NC */
	PAD_NC(GPP_A11, NONE),

	/* C18 : AP_I2C_EMR_SDA ==> NC */
	PAD_NC(GPP_C18, NONE),
	/* C19 : AP_I2C_EMR_SCL ==> NC */
	PAD_NC(GPP_C19, NONE),
	/* C22 : UART2_RTS_N ==> NC */
	PAD_NC(GPP_C22, NONE),

	/* D12 : WCAM_RST_L ==> NC */
	PAD_NC(GPP_D12, NONE),
	/* D13 : EN_PP2800_CAMERA ==> NC */
	PAD_NC(GPP_D13, NONE),
	/* D14 : EN_PP1200_CAMERA ==> NC */
	PAD_NC(GPP_D14, NONE),
	/* D15 : UCAM_RST_L ==> NC */
	PAD_NC(GPP_D15, NONE),
	/* D19 : WWAN_WLAN_COEX1 ==> TP */
	PAD_NC(GPP_D19, NONE),
	/* D20 : WWAN_WLAN_COEX2 ==> TP */
	PAD_NC(GPP_D20, NONE),
	/* D21 : WWAN_WLAN_COEX3 ==> TP */
	PAD_NC(GPP_D21, NONE),

	/* E1  : EMR_RESET_L ==> NC */
	PAD_NC(GPP_E1, NONE),
	/* E2  : CLK_24M_WCAM ==> NC */
	PAD_NC(GPP_E2, NONE),
	/* E5  : AP_SUB_IO_2 ==> TP */
	PAD_NC(GPP_E5, NONE),
	/* E10 : GPP_E10/SML_DATA0 ==> NC */
	PAD_NC(GPP_E10, NONE),

	/* G0  : SD_CMD ==> NC */
	PAD_NC(GPP_G0, NONE),
	/* G1  : SD_DATA0 ==> NC */
	PAD_NC(GPP_G1, NONE),
	/* G2  : SD_DATA1 ==> NC */
	PAD_NC(GPP_G2, NONE),
	/* G3  : SD_DATA2 ==> NC */
	PAD_NC(GPP_G3, NONE),
	/* G4  : SD_DATA3 ==> NC */
	PAD_NC(GPP_G4, NONE),
	/* G5  : SD_CD_ODL ==> NC */
	PAD_NC(GPP_G5, NONE),
	/* G6  : SD_CLK ==> NC */
	PAD_NC(GPP_G6, NONE),
	/* G7  : SD_SDIO_WP ==> NC */
	PAD_NC(GPP_G7, NONE),

	/* H1  : EN_PP3300_SD_U ==> NC */
	PAD_NC(GPP_H1, NONE),
};

const struct pad_config *variant_override_gpio_table(size_t *num)
{
	*num = ARRAY_SIZE(gpio_table);
	return gpio_table;
}
