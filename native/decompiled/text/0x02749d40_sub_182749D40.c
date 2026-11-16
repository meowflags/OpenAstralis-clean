// sub_182749D40
// rva 0x02749d40  size 405  section .text  group text
// window base 0x182749d40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182749D40(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(__int64, __int64, __int64, __int64, _QWORD, _DWORD *))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rcx
  int v10; // r9d
  __int64 v11; // rcx
  unsigned int v12; // r9d
  __int64 v13; // rbx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v21; // [rsp+0h] [rbp-18h] BYREF
  int v22; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_25;
  if ( a5 == v6 )
    goto LABEL_24;
  if ( a5[2] != 2 )
    goto LABEL_24;
  v9 = (unsigned int)a5[3];
  if ( (_DWORD)v9 == 0 )
    goto LABEL_24;
  v10 = v6[2 * v9] >> 3;
  switch ( v10 )
  {
    case 4260808:
      v11 = (unsigned int)v6[2 * v9 + 1];
LABEL_7:
      v12 = v11;
      v13 = (unsigned int)a5[4];
      if ( (_DWORD)v13 != 0 )
      {
        v14 = v6[2 * v13] >> 3;
        a2 = (unsigned int)v6[2 * v14 + 11];
        a1 = (unsigned int)a2 & (0xFCCu >> HIBYTE(v6[2 * v14 + 11]));
        v11 = (unsigned __int16)v6[2 * (unsigned int)v6[2 * v14 + 5] + 3 + a1];
        if ( (_DWORD)v11 != 4044 )
          goto LABEL_24;
      }
      v15 = a6(a1, a2, a3, a4: v11, a5: v12, a6: &v6[2 * v13]);
      v18 = (unsigned int)(v15 + 128);
      if ( (unsigned int)v18 >= 0x100 )
      {
        v19 = *(_QWORD *)(v7 + 40);
        if ( (unsigned __int64)(v19 + 16) > *(_QWORD *)(v7 + 32) )
        {
          v22 = v15;
          v19 = MEMORY[0x181EAA920](a1: v16, a2: v17, a3: 34086464);
          v15 = v22;
        }
        else
        {
          *(_QWORD *)(v7 + 40) = v19 + 16;
          *(_DWORD *)v19 = 34086464;
          *(_DWORD *)(v19 + 4) = 0;
          *(_QWORD *)(v19 + 8) = 0;
        }
        *(_DWORD *)(v19 + 4) = v15;
      }
      else
      {
        v19 = (__int64)&v6[2 * v6[v18 + 94088301]];
      }
      if ( *(int *)(v7 + 16) <= 0 )
        sub_18277F280(a1: v16, a2: v17, a3: v19);
      return v19;
    case 4288437:
      v11 = (unsigned int)SLOBYTE(v6[2 * v9 + 1]);
      goto LABEL_7;
    case 4288459:
      v11 = (unsigned int)SLOWORD(v6[2 * v9 + 1]);
      goto LABEL_7;
    case 4288481:
      v11 = LOWORD(v6[2 * v9 + 1]);
      goto LABEL_7;
    default:
LABEL_24:
      sub_182756FC0();
LABEL_25:
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
      return sub_182749EE0();
  }
}
