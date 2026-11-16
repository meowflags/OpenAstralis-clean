// sub_132AF7D4
// rva 0x132af7d4  size 314  section .text  group text
// window base 0x1932af7d4: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132AF7D4(_DWORD a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int i; // ebx
  __int64 v8; // rdi
  __int64 v9; // rsi
  int v10; // eax
  int v11; // eax
  __int64 v13; // [rsp+0h] [rbp-100h] BYREF
  __int64 v14; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v15; // [rsp+28h] [rbp-D8h] BYREF
  _DWORD v16[4]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v17[272]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+150h] [rbp+50h]

  v15 = 0;
  v14 = 0;
  if ( (unsigned int)__imp_api-ms-win-crt-runtime-l1-1-0.dll!_getpid(a1: 0xFFFFFFFFLL, a2, a3: 0, a4: 0, a5: &v15) == 0 )
  {
    for ( i = 0; i != 0x7FFFFFFF; ++i )
    {
      sub_1329EDE0(a1: v3, a2: v4, a3: 260, a4: (__int64)v17, a5: __imp_api-ms-win-crt-heap-l1-1-0.dll!free);
      if ( (unsigned int)__imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v8, a2: v9, a3: v17, a4: v15, a5: 0, a6: &v14) != 0 )
        break;
      v10 = __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v3, a2: v4, a3: v2, a4: v15);
      if ( v10 == -1073738820 )
        break;
      if ( v10 == -2147481643 )
        break;
      __imp_KERNEL32.dll!GetTickCount64(a1: v3, a2: v4, a3: 256, a4: v14, a5: 0, a6: v16);
      if ( v16[0] != 0 )
        break;
      v11 = __imp_KERNEL32.dll!GetSystemInfo;
      if ( __imp_api-ms-win-crt-convert-l1-1-0.dll!_itoa == 0 )
      {
        v11 = MEMORY[0x79b08]/* 0x79b08 */();
        MEMORY[0x3375e8]/* 0x3375e8 */ = v11;
      }
      if ( v11 == v16[2] )
      {
        v3 = i;
        break;
      }
    }
  }
  if ( v14 != 0 )
  {
    MEMORY[0x337578]/* 0x337578 */(a1: v3);
    v14 = 0;
  }
  if ( v15 != 0 )
    MEMORY[0x337558]/* 0x337558 */(a1: v3);
  return sub_132C8DE0(a1: v3, a2: v4, a3: v2, a4: (unsigned __int64)&v13 ^ v18, a5: v5, a6: v6);
}
