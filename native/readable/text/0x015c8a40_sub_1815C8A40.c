// sub_15C8A40
// rva 0x015c8a40  size 441  section .text  group text
// window base 0x1815c8a40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15C8A40(__int64 a1, __int64 a2, char *a3, __int64 a4, unsigned int a5, unsigned int a6)
{
  int v6; // ebp
  __int64 v7; // r13
  char *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 result; // rax
  unsigned int v16; // ebx
  __int64 v17; // rsi
  __int64 v18; // rdi
  unsigned int v19; // r8d
  char *v20; // rdx
  __int64 v21; // [rsp+0h] [rbp-38h] BYREF
  __int64 v22; // [rsp+10h] [rbp-28h]
  char *v23; // [rsp+18h] [rbp-20h]
  unsigned int v24; // [rsp+20h] [rbp-18h]
  unsigned int v25; // [rsp+24h] [rbp-14h]
  int v26; // [rsp+28h] [rbp-10h]
  unsigned int v27; // [rsp+2Ch] [rbp-Ch]
  unsigned int v28; // [rsp+30h] [rbp-8h]
  unsigned int v29; // [rsp+34h] [rbp-4h]

  v23 = a3;
  v29 = a5;
  v28 = a1;
  v22 = a2;
  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v9 + 8) )
  {
    v25 = a6;
    sub_1EB84E0();
    goto LABEL_11;
  }
  v27 = a6 - a5;
  v6 = MEMORY[0x123f3c60]/* 0x123f3c60 */ & a1;
  if ( a3 == v8 )
  {
LABEL_11:
    v26 = v6;
    v25 = a6;
    sub_2771080();
  }
  else if ( (unsigned __int16)*(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * (*(_DWORD *)a3 >> 3) + 20]
                                           + 12
                                           + 4
                                           * (*(_DWORD *)&v8[8 * (*(_DWORD *)a3 >> 3) + 44]
                                            & (0x5A9u >> HIBYTE(*(_DWORD *)&v8[8 * (*(_DWORD *)a3 >> 3) + 44])))] == 1449 )
  {
    v26 = MEMORY[0x123f3c60]/* 0x123f3c60 */ & a1;
    v25 = a6;
    v10 = *(_DWORD *)a3 >> 3;
    v24 = ((__int64 (__fastcall *)(__int64, __int64, char *, char *))(v7
                                                                    + *(_QWORD *)&v8[8 * v10
                                                                                   + 56
                                                                                   + HIWORD(*(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * v10 + 20] + 12 + 4 * (*(_DWORD *)&v8[8 * v10 + 44] & (0x5A9u >> HIBYTE(*(_DWORD *)&v8[8 * v10 + 44])))])]))(
            a1,
            a2,
            a3,
            a4: a3);
    sub_632A360(a1: v8, a2: v12, a3: v29, a4: v11, a5: v25, a6: v24);
    result = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(result + 40) > *(_QWORD *)(v9 + 32) )
    {
      result = sub_1EAA920(a1: v13, a2: v14, a3: 35853304);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = result + 40;
      *(_DWORD *)result = 35853304;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
      *(_QWORD *)(result + 32) = 0;
    }
    v16 = v27;
    v17 = v22;
    v18 = v28;
    v19 = v29;
    v20 = v23;
    *(_BYTE *)(result + 24) = MEMORY[0x123f3c60]/* 0x123f3c60 */ & v28;
    *(_DWORD *)(result + 20) = v19;
    *(_DWORD *)(result + 16) = v16;
    *(_DWORD *)(result + 12) = (unsigned __int64)(v17 - (_QWORD)v8) >> 3;
    *(_DWORD *)(result + 8) = (unsigned __int64)(v20 - v8) >> 3;
    if ( *(int *)(v9 + 16) <= 0 )
      return sub_277F280(a1: v18, a2: v17, a3: v20, a4: v24);
    return result;
  }
  sub_2770780();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_15C8C00();
}
