// sub_4F51320
// rva 0x04f51320  size 271  section .text  group text
// window base 0x184f51320: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F51320(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v16; // [rsp+0h] [rbp-28h] BYREF
  __int64 v17; // [rsp+10h] [rbp-18h]
  int v18; // [rsp+1Ch] [rbp-Ch]
  int v19; // [rsp+20h] [rbp-8h]
  unsigned int v20; // [rsp+24h] [rbp-4h]

  v20 = a5;
  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v6 + 8) )
  {
    v17 = a3;
    LODWORD(v7) = sub_1EB84E0();
LABEL_15:
    v18 = v7;
    LODWORD(v7) = sub_2771220(a1: v9, a2: v10, a3: (unsigned int)v7, a4: v8, a5: 103);
    goto LABEL_16;
  }
  v19 = (unsigned __int16)a5;
  v17 = a3;
  v7 = sub_4F4C760(a1, a2, a3, a4: a3, a5);
  if ( (_DWORD)v7 == -1 )
  {
    v13 = *(_QWORD *)(v6 + 40);
    v12 = 34089376;
    if ( (unsigned __int64)(v13 + 16) > *(_QWORD *)(v6 + 32) )
    {
      v18 = -1;
      v13 = sub_1EAA840(a1: v9, a2: v10, a3: 34089376, a4: 34089376, a5: 1);
      LODWORD(v7) = v18;
    }
    else
    {
      *(_QWORD *)(v6 + 40) = v13 + 16;
      *(_QWORD *)v13 = 34089376;
      *(_DWORD *)(v13 + 8) = 1;
      *(_DWORD *)(v13 + 12) = 0;
    }
    v14 = v20;
    *(_WORD *)(v13 + 12) = v20;
    goto LABEL_7;
  }
  if ( (unsigned int)v7 >= 0x67 )
    goto LABEL_15;
  v11 = *(unsigned int *)(v5 + 4 * v7 + 377171996);
  if ( (_DWORD)v11 == 0 )
  {
LABEL_16:
    v18 = v7;
    sub_2771080();
    goto LABEL_17;
  }
  v12 = *(unsigned int *)(v5 + 8 * v11 + 8);
  if ( (unsigned int)v12 < 2 )
  {
LABEL_17:
    sub_2771220(a1: v9, a2: v17, a3: 1, a4: v12, a5: (unsigned int)v12);
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
    return sub_4F51440();
  }
  v13 = v5 + 8LL * *(unsigned int *)(v5 + 8 * v11 + 16);
  v14 = v20;
LABEL_7:
  if ( *(int *)(v6 + 16) <= 0 )
  {
    v18 = v7;
    sub_277F280(a1: v9, a2: v10, a3: v13, a4: v12, a5: v14);
  }
  return v13;
}
