// sub_132B8C40
// rva 0x132b8c40  size 172  section .text  group text
// window base 0x1932b8c40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B8C40(__int64 a1, __int64 a2, int a3, unsigned __int16 *a4)
{
  __int64 v4; // rdx
  unsigned int v5; // ebx
  unsigned int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rsi

  if ( a3 <= 2 || a4[1] != 58 || a4[2] == 92 )
  {
    if ( __imp_api-ms-win-crt-string-l1-1-0.dll!wcslen == -1 )
    {
      v14 = __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1, a2, a3: 260, a4: 0);
      if ( v14 != 0 )
      {
        __imp_api-ms-win-crt-environment-l1-1-0.dll!_wgetcwd = __imp_api-ms-win-crt-string-l1-1-0.dll!wcslen(a1: v14, a2: v16, a3: v15, a4: v14);
        __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v18, a2: v19, a3: v17, a4: v18);
      }
    }
    return MEMORY[0x336f74]/* 0x336f74 */;
  }
  else
  {
    v4 = *a4;
    v5 = 0;
    if ( (unsigned __int16)(v4 - 97) > 0x19u )
    {
      if ( (unsigned __int16)(v4 - 65) > 0x19u )
        return 0;
      v6 = v4 - 64;
    }
    else
    {
      v6 = v4 - 96;
    }
    v7 = sub_132B8BD8(a1, a2, a3: v4, a4: v6);
    if ( v7 != 0 )
    {
      v5 = MEMORY[0x79cb0]/* 0x79cb0 */(a1: v7, a2: v9, a3: v8, a4: v7);
      MEMORY[0x79ae0]/* 0x79ae0 */(a1: v11, a2: v12, a3: v10, a4: v11);
    }
    return v5;
  }
}
