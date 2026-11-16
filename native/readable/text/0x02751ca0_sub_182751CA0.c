// sub_2751CA0
// rva 0x02751ca0  size 309  section .text  group text
// window base 0x182751ca0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2751CA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(__int64, __int64, _DWORD *, _QWORD, _QWORD, _QWORD))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // ecx
  unsigned int v12; // r9d
  __int64 v13; // rcx
  int v14; // ebx
  unsigned int v15; // r8d
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_28;
  if ( a5 == v6 )
    goto LABEL_27;
  if ( a5[2] != 3 )
    goto LABEL_27;
  v9 = (unsigned int)a5[3];
  if ( (_DWORD)v9 != 0 && v6[2 * v9] >> 3 != 4262015 )
    goto LABEL_27;
  v10 = (unsigned int)a5[4];
  if ( (_DWORD)v10 == 0 )
    goto LABEL_27;
  v11 = v6[2 * v10] >> 3;
  switch ( v11 )
  {
    case 4260808:
      v12 = v6[2 * v10 + 1];
LABEL_9:
      v13 = (unsigned int)a5[5];
      if ( (_DWORD)v13 == 0 )
        goto LABEL_27;
      v14 = v6[2 * v13] >> 3;
      switch ( v14 )
      {
        case 4260808:
          v15 = v6[2 * v13 + 1];
          goto LABEL_12;
        case 4288437:
          v15 = SLOBYTE(v6[2 * v13 + 1]);
          goto LABEL_12;
        case 4288459:
          v15 = SLOWORD(v6[2 * v13 + 1]);
          goto LABEL_12;
        case 4288481:
          v15 = LOWORD(v6[2 * v13 + 1]);
LABEL_12:
          result = a6(a1, a2, a3: &v6[2 * v9], a4: v15, a5: v12, a6: v15);
          if ( *(int *)(v7 + 16) <= 0 )
            return sub_277F280(a1: v18, a2: v19, a3: v17);
          return result;
        default:
          goto LABEL_27;
      }
    case 4288437:
      v12 = SLOBYTE(v6[2 * v10 + 1]);
      goto LABEL_9;
    case 4288459:
      v12 = SLOWORD(v6[2 * v10 + 1]);
      goto LABEL_9;
    case 4288481:
      v12 = LOWORD(v6[2 * v10 + 1]);
      goto LABEL_9;
    default:
LABEL_27:
      sub_2757000(a1, a2, a3: a5);
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
      return sub_2751DE0();
  }
}
