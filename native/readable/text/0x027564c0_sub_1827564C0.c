// sub_27564C0
// rva 0x027564c0  size 338  section .text  group text
// window base 0x1827564c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27564C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(_QWORD, __int64, __int64, _QWORD, _DWORD *, _QWORD))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdi
  int v12; // ecx
  unsigned int v13; // edi
  __int64 v14; // rcx
  int v15; // ebx
  unsigned int v16; // r8d
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_28;
  if ( a5 == v6 )
    goto LABEL_27;
  if ( a5[2] != 3 )
    goto LABEL_27;
  v9 = (unsigned int)a5[3];
  if ( (_DWORD)v9 != 0 )
  {
    v10 = v6[2 * v9] >> 3;
    if ( (unsigned __int16)v6[2 * v6[2 * v10 + 5] + 3 + (v6[2 * v10 + 11] & (0x1714u >> HIBYTE(v6[2 * v10 + 11])))] != 5908 )
      goto LABEL_27;
  }
  v11 = (unsigned int)a5[4];
  if ( (_DWORD)v11 == 0 )
    goto LABEL_27;
  v12 = v6[2 * v11] >> 3;
  switch ( v12 )
  {
    case 4260808:
      v13 = v6[2 * v11 + 1];
LABEL_9:
      v14 = (unsigned int)a5[5];
      if ( (_DWORD)v14 == 0 )
        goto LABEL_27;
      v15 = v6[2 * v14] >> 3;
      switch ( v15 )
      {
        case 4260808:
          v16 = v6[2 * v14 + 1];
          goto LABEL_12;
        case 4288437:
          v16 = SLOBYTE(v6[2 * v14 + 1]);
          goto LABEL_12;
        case 4288459:
          v16 = SLOWORD(v6[2 * v14 + 1]);
          goto LABEL_12;
        case 4288481:
          v16 = LOWORD(v6[2 * v14 + 1]);
LABEL_12:
          result = a6(a1: v16, a2, a3, a4: v16, a5: &v6[2 * v9], a6: v13);
          if ( *(int *)(v7 + 16) <= 0 )
            return sub_277F280(a1: v19, a2: v20, a3: v18);
          return result;
        default:
          goto LABEL_27;
      }
    case 4288437:
      v13 = SLOBYTE(v6[2 * v11 + 1]);
      goto LABEL_9;
    case 4288459:
      v13 = SLOWORD(v6[2 * v11 + 1]);
      goto LABEL_9;
    case 4288481:
      v13 = LOWORD(v6[2 * v11 + 1]);
      goto LABEL_9;
    default:
LABEL_27:
      sub_2756FC0();
LABEL_28:
      sub_1EB84E0();
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
      return sub_2756620();
  }
}
