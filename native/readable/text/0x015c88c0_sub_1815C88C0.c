// sub_15C88C0
// rva 0x015c88c0  size 366  section .text  group text
// window base 0x1815c88c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15C88C0(__int64 a1, __int64 a2, char *a3, __int64 a4, unsigned int a5, unsigned int a6)
{
  __int64 v6; // r13
  char *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  char *v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 result; // rax
  unsigned int v17; // ebx
  unsigned int v18; // r8d
  char *v19; // rdx
  __int64 v20; // [rsp+0h] [rbp-28h] BYREF
  char *v21; // [rsp+10h] [rbp-18h]
  unsigned int v22; // [rsp+18h] [rbp-10h]
  unsigned int v23; // [rsp+1Ch] [rbp-Ch]
  unsigned int v24; // [rsp+20h] [rbp-8h]
  unsigned int v25; // [rsp+24h] [rbp-4h]

  v21 = a3;
  v25 = a5;
  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v8 + 8) )
  {
    v23 = a6;
    sub_1EB84E0();
    goto LABEL_11;
  }
  v24 = a6 - a5;
  if ( a3 == v7 )
  {
LABEL_11:
    v23 = a6;
    sub_2771080();
  }
  else if ( (unsigned __int16)*(_DWORD *)&v7[8 * *(unsigned int *)&v7[8 * (*(_DWORD *)a3 >> 3) + 20]
                                           + 12
                                           + 4
                                           * (*(_DWORD *)&v7[8 * (*(_DWORD *)a3 >> 3) + 44]
                                            & (0x5A9u >> HIBYTE(*(_DWORD *)&v7[8 * (*(_DWORD *)a3 >> 3) + 44])))] == 1449 )
  {
    v23 = a6;
    v9 = *(_DWORD *)a3 >> 3;
    v10 = &v7[8 * *(unsigned int *)&v7[8 * v9 + 20]];
    v11 = *(_DWORD *)&v7[8 * v9 + 44] & (0x5A9u >> HIBYTE(*(_DWORD *)&v7[8 * v9 + 44]));
    v22 = ((__int64 (__fastcall *)(__int64, char *, char *, char *))(v6
                                                                   + *(_QWORD *)&v7[8 * v9
                                                                                  + 56
                                                                                  + HIWORD(*(_DWORD *)&v10[4 * v11 + 12])]))(
            a1: v11,
            a2: v10,
            a3,
            a4: a3);
    sub_632A360(a1: v7, a2: v13, a3: v25, a4: v12, a5: v23, a6: v22);
    result = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(result + 40) > *(_QWORD *)(v8 + 32) )
    {
      result = sub_1EAA920(a1: v14, a2: v15, a3: 35853304);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = result + 40;
      *(_DWORD *)result = 35853304;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
      *(_QWORD *)(result + 32) = 0;
    }
    v17 = v24;
    v18 = v25;
    v19 = v21;
    *(_BYTE *)(result + 24) = 1;
    *(_DWORD *)(result + 20) = v18;
    *(_DWORD *)(result + 16) = v17;
    *(_DWORD *)(result + 8) = (unsigned __int64)(v19 - v7) >> 3;
    if ( *(int *)(v8 + 16) <= 0 )
      return sub_277F280(a1: v14, a2: v15, a3: v19, a4: v22);
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
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_15C8A40();
}
