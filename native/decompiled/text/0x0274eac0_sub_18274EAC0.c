// sub_18274EAC0
// rva 0x0274eac0  size 272  section .text  group text
// window base 0x18274eac0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18274EAC0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(__int64, __int64, __int64, _DWORD *, _DWORD *, _DWORD *))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rbp
  int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v19; // [rsp+0h] [rbp-18h] BYREF
  int v20; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB84E0]();
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
    return sub_18274EBE0();
  }
  else
  {
    if ( a5 != v6 && a5[2] == 2 )
    {
      v9 = (unsigned int)a5[3];
      if ( (_DWORD)v9 == 0 )
        goto LABEL_7;
      v10 = v6[2 * v9] >> 3;
      if ( SHIWORD(v6[2 * v10 + 15]) >= 3 && v6[2 * v6[2 * v10 + 4] + 5] == 78089 )
        goto LABEL_7;
    }
    do
    {
      a6 = (__int64 (__fastcall *)(__int64, __int64, __int64, _DWORD *, _DWORD *, _DWORD *))sub_182756FC0();
LABEL_7:
      v11 = (unsigned int)a5[4];
      if ( (_DWORD)v11 == 0 )
        break;
      v12 = v6[2 * v11] >> 3;
    }
    while ( SHIWORD(v6[2 * v12 + 15]) < 2 || v6[2 * v6[2 * v12 + 4] + 4] != 9100 );
    v13 = a6(a1, a2, a3, a4: &v6[2 * v9], a5: &v6[2 * v9], a6: &v6[2 * v11]);
    v16 = (unsigned int)(v13 + 128);
    if ( (unsigned int)v16 >= 0x100 )
    {
      v17 = *(_QWORD *)(v7 + 40);
      if ( (unsigned __int64)(v17 + 16) > *(_QWORD *)(v7 + 32) )
      {
        v20 = v13;
        v17 = MEMORY[0x181EAA920](a1: v14, a2: v15, a3: 34086464);
        v13 = v20;
      }
      else
      {
        *(_QWORD *)(v7 + 40) = v17 + 16;
        *(_DWORD *)v17 = 34086464;
        *(_DWORD *)(v17 + 4) = 0;
        *(_QWORD *)(v17 + 8) = 0;
      }
      *(_DWORD *)(v17 + 4) = v13;
    }
    else
    {
      v17 = (__int64)&v6[2 * v6[v16 + 94088301]];
    }
    if ( *(int *)(v7 + 16) <= 0 )
      sub_18277F280(a1: v14, a2: v15, a3: v17);
    return v17;
  }
}
