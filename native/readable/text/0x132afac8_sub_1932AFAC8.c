// sub_132AFAC8
// rva 0x132afac8  size 384  section .text  group text
// window base 0x1932afac8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132AFAC8(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  int v4; // esi
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  int v15; // ebx
  int v16; // eax
  __int64 v17; // rsi
  _QWORD *v18; // r14
  __int64 v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v24; // [rsp+0h] [rbp-98h] BYREF
  __int64 v25; // [rsp+8h] [rbp-90h]
  __int64 v26; // [rsp+10h] [rbp-88h]
  int v27; // [rsp+18h] [rbp-80h]
  __int64 v28; // [rsp+20h] [rbp-78h] BYREF
  __int64 v29; // [rsp+28h] [rbp-70h] BYREF
  __int64 v30; // [rsp+30h] [rbp-68h] BYREF
  int v31; // [rsp+50h] [rbp-48h]
  _BYTE v32[32]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v33; // [rsp+80h] [rbp-18h]

  __imp_KERNEL32.dll!GetSystemInfo(a1: 0xFFFFFFFFLL, a2, a3, a4: &v30);
  __imp_api-ms-win-crt-convert-l1-1-0.dll!_itoa = v31;
  __imp_api-ms-win-crt-heap-l1-1-0.dll!free = (double)(unsigned int)(100 * v31);
  if ( (unsigned int)sub_132AFE68(
                       a1: v3,
                       a2: v4,
                       a3: (unsigned int)&v29,
                       a4: 230,
                       a5: v5,
                       a6: v6,
                       a7: v24,
                       a8: v25,
                       a9: v26) == 0 )
  {
    if ( (unsigned int)sub_132AFE68(
                         a1: v8,
                         a2: v9,
                         a3: (unsigned int)&v28,
                         a4: (int)v8 + 7,
                         a5: v10,
                         a6: v11,
                         a7: v24,
                         a8: v25,
                         a9: v26) == 0 )
    {
      v15 = 0;
      if ( __imp_api-ms-win-crt-heap-l1-1-0.dll!free > 0 )
      {
        v14 = 0;
        do
        {
          v16 = __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v13, a2: v14, a3: v32, a4: (unsigned int)v15, a5: 10);
          v18 = (_QWORD *)(v17 + __imp_api-ms-win-crt-heap-l1-1-0.dll!calloc);
          v19 = sub_132AFEE8(
                  a1: -1,
                  a2: v17,
                  a3: v28,
                  a4: v29,
                  a5: __imp_api-ms-win-crt-heap-l1-1-0.dll!malloc,
                  a6: v16,
                  a7: v24,
                  a8: v25,
                  a9: v26);
          if ( v19 != 0 )
          {
            if ( (unsigned int)__imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v13, a2: v14, a3: 0, a4: 0, a5: v18) == 0
              && (unsigned int)MEMORY[0x337548]/* 0x337548 */(a1: v21, a2: v22, a3: v19, a4: *v18, a5: 0, a6: v18 + 2) == 0 )
            {
              MEMORY[0x337560]/* 0x337560 */(a1: v21, a2: v22, a3: v20, a4: *v18);
              v21 = 0;
            }
            MEMORY[0x79ae0]/* 0x79ae0 */(a1: v21, a2: v22, a3: v20, a4: v19);
          }
          if ( (_DWORD)v13 != 0 )
            break;
          ++v15;
          v14 += 24;
        }
        while ( v15 < MEMORY[0x3375c8]/* 0x3375c8 */ );
      }
      MEMORY[0x79ae0]/* 0x79ae0 */(a1: v13, a2: v14, a3: v12, a4: v28);
    }
    MEMORY[0x79ae0]/* 0x79ae0 */(a1: v13, a2: v14, a3: v12, a4: v29);
    if ( (_DWORD)v8 == 0 )
      sub_132AFC48(a1: 0, a2: v9, a3: v7, a4: MEMORY[0x3375d8]/* 0x3375d8 */, a5: v10, a6: v11, a7: v24, a8: v25, a9: v26, a10: v27);
  }
  return sub_132C8DE0(a1: v8, a2: v9, a3: v7, a4: (unsigned __int64)&v24 ^ v33, a5: v10, a6: v11);
}
