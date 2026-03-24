# SPDX-License-Identifier: Apache-2.0

board_runner_args(openocd --config "board/ti_ek-tm4c123gxl.cfg")

include(${ZEPHYR_BASE}/boards/common/openocd.board.cmake)
