/**
 * @addtogroup MC_UUID mcUuid - Universally Unique Identifier.
 *
 * Copyright � Trustonic Limited 2013
 * 
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without modification, 
 * are permitted provided that the following conditions are met:
 * 
 *   1. Redistributions of source code must retain the above copyright notice, this 
 *      list of conditions and the following disclaimer.
 * 
 *   2. Redistributions in binary form must reproduce the above copyright notice, 
 *      this list of conditions and the following disclaimer in the documentation 
 *     and/or other materials provided with the distribution.
 * 
 *   3. Neither the name of the Trustonic Limited nor the names of its contributors 
 *      may be used to endorse or promote products derived from this software 
 *      without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND 
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. 
 * IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, 
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, 
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, 
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE 
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED 
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * @ingroup  MC_DATA_TYPES
 * @{
 */

#ifndef MC_UUID_H_
#define MC_UUID_H_

#define UUID_TYPE

/** Universally Unique Identifier (UUID) according to ISO/IEC 11578. */
typedef struct {
    uint8_t value[16]; /**< Value of the UUID. */
} mcUuid_t, *mcUuid_ptr;

/** UUID value used as free marker in service provider containers. */
#define MC_UUID_FREE_DEFINE \
    { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, \
      0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF }

static const mcUuid_t MC_UUID_FREE = {
    MC_UUID_FREE_DEFINE
};

/** Reserved UUID. */
#define MC_UUID_RESERVED_DEFINE \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }

static const mcUuid_t MC_UUID_RESERVED = {
    MC_UUID_RESERVED_DEFINE
};

/** UUID for system applications. */
#define MC_UUID_SYSTEM_DEFINE \
    { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, \
      0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE }

static const mcUuid_t MC_UUID_SYSTEM = {
    MC_UUID_SYSTEM_DEFINE
};

#endif // MC_UUID_H_

/** @} */

