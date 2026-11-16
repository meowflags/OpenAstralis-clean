// sub_1ED38E0
// rva 0x01ed38e0  size 273  section .text  group text
// window base 0x181ed38e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1ED38E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  _DWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rcx
  int v13; // ebx
  bool v14; // of
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 result; // rax
  char v19; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v20; // [rsp+10h] [rbp-18h]
  _DWORD *v21; // [rsp+18h] [rbp-10h]
  int v22; // [rsp+20h] [rbp-8h]
  unsigned int v23; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v19);
    goto LABEL_16;
  }
  v21 = v6 + 94165114;
  v8 = (_DWORD *)sub_5039DE0(a1, a2, a3: v6 + 94165114);
  if ( v8 != v6 && *v8 >> 3 != 4260808 )
    goto LABEL_17;
  if ( v8 == v6 )
  {
LABEL_16:
    v8 = (_DWORD *)sub_2771080();
LABEL_17:
    sub_276FC00(a1: v10, a2: v11, a3: v8, a4: v9, a5: v6 + 8521616);
    goto LABEL_18;
  }
  v12 = (unsigned int)v8[1];
  v13 = v8[1];
  v14 = __OFADD__(1, v13);
  v15 = v13 + 1;
  if ( v14 )
  {
LABEL_18:
    sub_2770920();
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
    return sub_1ED3A00();
  }
  v16 = (unsigned int)(v15 + 128);
  if ( (unsigned int)v16 >= 0x100 )
  {
    v17 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(v17 + 16) > *(_QWORD *)(v7 + 32) )
    {
      v22 = v15;
      v23 = v12;
      v20 = v8;
      v17 = sub_1EAA920(a1: v10, a2: v11, a3: 34086464);
      v15 = v22;
      v12 = v23;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v17 + 16;
      *(_DWORD *)v17 = 34086464;
      *(_DWORD *)(v17 + 4) = 0;
      *(_QWORD *)(v17 + 8) = 0;
    }
    *(_DWORD *)(v17 + 4) = v15;
  }
  else
  {
    v17 = (__int64)&v6[2 * v6[v16 + 94088301]];
  }
  v23 = v12;
  result = sub_503A140(a1: v10, a2: v11, a3: v21, a4: v12, a5: v17);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280();
  return result;
}
