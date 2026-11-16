// sub_182764260
// rva 0x02764260  size 345  section .text  group text
// window base 0x182764260: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182764260(__int64 a1, __int64 a2, __int64 a3, int a4, _DWORD *a5, int a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  _DWORD *v11; // rax
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // rdi
  __int64 v15; // rsi
  int v16; // r9d
  __int64 v17; // rdx
  __int64 result; // rax
  __int64 v19; // rcx
  char v20; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v21; // [rsp+8h] [rbp-20h]
  _DWORD *v22; // [rsp+10h] [rbp-18h]
  __int64 v23; // [rsp+18h] [rbp-10h]
  int v24; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v7 + 8) )
  {
    v22 = a5;
    v23 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( a5 != v6 )
  {
    if ( *(_DWORD *)(a3 + 12) == 0 )
    {
LABEL_23:
      v22 = a5;
      v23 = a3;
      sub_182771080(a1, a2, a3, a4, (_DWORD)a5, a6, a7: v20);
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_1827643C0();
    }
    v8 = a5[9];
    v9 = (unsigned int)(v8 + 128);
    if ( (unsigned int)v9 >= 0x100 )
    {
      v19 = *(_QWORD *)(v7 + 40);
      if ( (unsigned __int64)(v19 + 16) > *(_QWORD *)(v7 + 32) )
      {
        v24 = a5[9];
        v22 = a5;
        v23 = a3;
        v19 = MEMORY[0x181EAA920](a1, a2, a3: 34086464);
        v8 = v24;
        a5 = v22;
        a3 = v23;
      }
      else
      {
        *(_QWORD *)(v7 + 40) = v19 + 16;
        *(_DWORD *)v19 = 34086464;
        *(_DWORD *)(v19 + 4) = 0;
        *(_QWORD *)(v19 + 8) = 0;
      }
      *(_DWORD *)(v19 + 4) = v8;
      v10 = v19;
    }
    else
    {
      v10 = (__int64)&v6[2 * v6[v9 + 94088301]];
    }
    v22 = a5;
    v23 = a3;
    v11 = (_DWORD *)sub_1827848A0(a1, a2, a3: v6 + 94166954, a4: v6 + 94166954, a5: v10);
    if ( v11 != v6 )
    {
      v17 = *v11 >> 3;
      if ( SHIWORD(v6[2 * v17 + 15]) < 2 || (v12 = (unsigned int)v6[2 * v17 + 4], v6[2 * v12 + 4] != 1560) )
        v11 = (_DWORD *)sub_18276FC00(
                          a1: v14,
                          a2: v15,
                          a3: (_DWORD)v11,
                          a4: v13,
                          a5: (int)v6 + 40453088,
                          a6: v16,
                          a7: v20);
    }
    v21 = v11;
    if ( v11 == v6 )
      result = 0;
    else
      result = MEMORY[0x181E653E0](a1: v14, a2: v15, a3: v11);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_18277F280(a1: v14, a2: v15, a3: v12);
    return result;
  }
  v23 = a3;
  sub_182771080(a1, a2, a3, a4, (_DWORD)a5, a6, a7: v20);
  goto LABEL_23;
}
