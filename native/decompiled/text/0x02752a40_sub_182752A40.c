// sub_182752A40
// rva 0x02752a40  size 376  section .text  group text
// window base 0x182752a40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182752A40(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        void (__fastcall *a6)(_QWORD, __int64, __int64, __int64, __int64, __int64))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // r9
  int v10; // edi
  __int64 v11; // r9
  __int64 v12; // rdi
  int v13; // ecx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v21; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_32;
  if ( a5 == v6 )
    goto LABEL_31;
  if ( a5[2] != 3 )
    goto LABEL_31;
  v9 = (unsigned int)a5[3];
  if ( (_DWORD)v9 == 0 )
    goto LABEL_31;
  v10 = v6[2 * v9] >> 3;
  switch ( v10 )
  {
    case 4260452:
      v11 = *(_QWORD *)&v6[2 * v9 + 2];
      break;
    case 4260808:
      v11 = (int)v6[2 * v9 + 1];
      break;
    case 4288437:
      v11 = SLOBYTE(v6[2 * v9 + 1]);
      break;
    case 4288459:
      v11 = SLOWORD(v6[2 * v9 + 1]);
      break;
    case 4288481:
      v11 = LOWORD(v6[2 * v9 + 1]);
      break;
    default:
      goto LABEL_31;
  }
  v12 = (unsigned int)a5[4];
  if ( (_DWORD)v12 == 0 )
  {
LABEL_31:
    sub_182756FC0();
LABEL_32:
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_182752BC0();
  }
  v13 = v6[2 * v12] >> 3;
  switch ( v13 )
  {
    case 4260452:
      v14 = *(_QWORD *)&v6[2 * v12 + 2];
LABEL_10:
      v15 = (unsigned int)a5[5];
      if ( (_DWORD)v15 == 0 || v6[2 * v15] >> 3 != 4288437 )
        goto LABEL_31;
      v16 = (unsigned int)SLOBYTE(v6[2 * v15 + 1]);
      a6(a1: (unsigned int)v16, a2, a3, a4: v16, a5: v11, a6: v14);
      if ( *(int *)(v7 + 16) <= 0 )
        sub_18277F280(a1: v18, a2: v19, a3: v17);
      return (__int64)v6;
    case 4260808:
      v14 = (int)v6[2 * v12 + 1];
      goto LABEL_10;
    case 4288437:
      v14 = SLOBYTE(v6[2 * v12 + 1]);
      goto LABEL_10;
    case 4288459:
      v14 = SLOWORD(v6[2 * v12 + 1]);
      goto LABEL_10;
    case 4288481:
      v14 = LOWORD(v6[2 * v12 + 1]);
      goto LABEL_10;
    default:
      goto LABEL_31;
  }
}
