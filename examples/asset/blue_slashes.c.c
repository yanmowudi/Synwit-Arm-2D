/*
 * Copyright (c) 2009-2021 Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#include <stdint.h>

#if defined(__clang__)
#   pragma clang diagnostic push
#   pragma clang diagnostic ignored "-Wmissing-variable-declarations"
#endif

__attribute__((aligned(2)))
const uint8_t c_bmpBlueSlashes[] = {
    /*Pixel format: Blue: 5 bit, Green: 6 bit, Red: 5 bit*/
    0x3d, 0xa6, 0x3d, 0xa6, 0x3d, 0xa6, 0x3d, 0xa6, 0x3d, 0xa6, 0x3d, 0xa6, 0x1d, 0x9e, 0x3d, 0xa6, 0xfe, 0xce, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0xbe, 0xbe,  
    0x3d, 0xa6, 0x3d, 0xa6, 0x3d, 0xa6, 0x3d, 0xa6, 0x3d, 0xa6, 0x1d, 0x9e, 0x3d, 0xa6, 0x1e, 0xcf, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x5f, 0xdf, 0x9d, 0xb6, 0x1d, 0x9e,  
    0x3d, 0xa6, 0x3d, 0xa6, 0x3d, 0xa6, 0x3d, 0xa6, 0x1d, 0x9e, 0x5d, 0xae, 0x3e, 0xd7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x5f, 0xdf, 0x7d, 0xb6, 0x1d, 0x9e, 0x3d, 0xa6,  
    0x3d, 0xa6, 0x3d, 0xa6, 0x3d, 0xa6, 0x1d, 0x9e, 0x7d, 0xae, 0x5f, 0xdf, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x3e, 0xd7, 0x5d, 0xae, 0x1d, 0x9e, 0x3d, 0xa6, 0x3d, 0xa6,  
    0x3d, 0xa6, 0x3d, 0xa6, 0x1d, 0x9e, 0x9d, 0xb6, 0x5f, 0xdf, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x1e, 0xd7, 0x3d, 0xa6, 0x1d, 0x9e, 0x3d, 0xa6, 0x3d, 0xa6, 0x3d, 0xa6,  
    0x3d, 0xa6, 0x1d, 0x9e, 0xbe, 0xbe, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0xfe, 0xce, 0x3d, 0xa6, 0x1d, 0x9e, 0x3d, 0xa6, 0x3d, 0xa6, 0x3d, 0xa6, 0x3d, 0xa6,  
    0x3d, 0x9e, 0xde, 0xc6, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0xde, 0xc6, 0x3d, 0xa6, 0x1d, 0x9e, 0x3d, 0xa6, 0x3d, 0xa6, 0x3d, 0xa6, 0x3d, 0xa6, 0x1d, 0x9e,  
    0xfe, 0xce, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0xbe, 0xbe, 0x1d, 0x9e, 0x3d, 0x9e, 0x3d, 0xa6, 0x3d, 0xa6, 0x3d, 0xa6, 0x3d, 0xa6, 0x1d, 0x9e, 0x5d, 0xae,  
    0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x5f, 0xdf, 0x9d, 0xb6, 0x1d, 0x9e, 0x3d, 0xa6, 0x3d, 0xa6, 0x3d, 0xa6, 0x3d, 0xa6, 0x3d, 0xa6, 0x1d, 0x9e, 0x7d, 0xb6, 0x5f, 0xdf,  
    0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x5f, 0xdf, 0x7d, 0xae, 0x1d, 0x9e, 0x3d, 0xa6, 0x3d, 0xa6, 0x3d, 0xa6, 0x3d, 0xa6, 0x3d, 0xa6, 0x1d, 0x9e, 0x9d, 0xb6, 0x5f, 0xdf, 0x7f, 0xe7,  
    0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x3e, 0xd7, 0x5d, 0xae, 0x1d, 0x9e, 0x3d, 0xa6, 0x3d, 0xa6, 0x3d, 0xa6, 0x3d, 0xa6, 0x3d, 0x9e, 0x1d, 0x9e, 0xbe, 0xbe, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7,  
    0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x1e, 0xd7, 0x3d, 0xa6, 0x1d, 0x9e, 0x3d, 0xa6, 0x3d, 0xa6, 0x3d, 0xa6, 0x3d, 0xa6, 0x1d, 0x9e, 0x3d, 0xa6, 0xde, 0xc6, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7,  
    0x7f, 0xe7, 0x7f, 0xe7, 0xfe, 0xce, 0x3d, 0xa6, 0x1d, 0x9e, 0x3d, 0xa6, 0x3d, 0xa6, 0x3d, 0xa6, 0x3d, 0xa6, 0x1d, 0x9e, 0x3d, 0xa6, 0xfe, 0xce, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7,  
    0x7f, 0xe7, 0xde, 0xc6, 0x3d, 0x9e, 0x3d, 0x9e, 0x3d, 0xa6, 0x3d, 0xa6, 0x3d, 0xa6, 0x3d, 0xa6, 0x1d, 0x9e, 0x5d, 0xa6, 0x1e, 0xd7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7,  
    0xbe, 0xbe, 0x1d, 0x9e, 0x3d, 0xa6, 0x3d, 0xa6, 0x3d, 0xa6, 0x3d, 0xa6, 0x3d, 0xa6, 0x1d, 0x9e, 0x5d, 0xae, 0x3f, 0xdf, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x3f, 0xdf,  
    0x1d, 0x9e, 0x1d, 0x9e, 0x1d, 0x9e, 0x1d, 0x9e, 0x1d, 0x9e, 0x1d, 0x9e, 0x1d, 0x9e, 0x7d, 0xb6, 0x5f, 0xdf, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x7f, 0xe7, 0x1e, 0xd7, 0x5d, 0xa6,  
    0x7d, 0xb6, 0x7d, 0xb6, 0x7d, 0xb6, 0x7d, 0xb6, 0x7d, 0xb6, 0x7d, 0xb6, 0xbe, 0xc6, 0x7f, 0xe7, 0x9f, 0xef, 0x9f, 0xe7, 0x9f, 0xe7, 0x9f, 0xe7, 0x9f, 0xe7, 0x9f, 0xef, 0x5f, 0xdf, 0x9d, 0xb6, 0x7d, 0xb6,  
};


#if defined(__clang__)
#   pragma clang diagnostic pop
#endif


