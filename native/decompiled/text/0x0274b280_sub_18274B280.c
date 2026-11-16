// sub_18274B280
// rva 0x0274b280  size 454  section .text  group text
// window base 0x18274b280: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18274B280(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(_QWORD, _DWORD *, __int64, _DWORD *, _QWORD, _QWORD))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // r9
  int v10; // edi
  unsigned int v11; // r9d
  __int64 v12; // rdi
  int v13; // esi
  unsigned int v14; // edi
  __int64 v15; // rsi
  int v16; // ecx
  unsigned int v17; // esi
  __int64 v18; // rcx
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_37;
  if ( a5 == v6 )
    goto LABEL_36;
  if ( a5[2] != 4 )
    goto LABEL_36;
  v9 = (unsigned int)a5[3];
  if ( (_DWORD)v9 == 0 )
    goto LABEL_36;
  v10 = v6[2 * v9] >> 3;
  switch ( v10 )
  {
    case 4260808:
      v11 = v6[2 * v9 + 1];
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
      goto LABEL_36;
  }
  v12 = (unsigned int)a5[4];
  if ( (_DWORD)v12 == 0 )
    goto LABEL_36;
  v13 = v6[2 * v12] >> 3;
  switch ( v13 )
  {
    case 4260808:
      v14 = v6[2 * v12 + 1];
      break;
    case 4288437:
      v14 = SLOBYTE(v6[2 * v12 + 1]);
      break;
    case 4288459:
      v14 = SLOWORD(v6[2 * v12 + 1]);
      break;
    case 4288481:
      v14 = LOWORD(v6[2 * v12 + 1]);
      break;
    default:
      goto LABEL_36;
  }
  v15 = (unsigned int)a5[5];
  if ( (_DWORD)v15 == 0 )
  {
LABEL_36:
    sub_182756FC0();
LABEL_37:
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
    return sub_18274B460();
  }
  v16 = v6[2 * v15] >> 3;
  switch ( v16 )
  {
    case 4260808:
      v17 = v6[2 * v15 + 1];
LABEL_13:
      v18 = (unsigned int)a5[6];
      if ( (_DWORD)v18 != 0 && v6[2 * v18] >> 3 != 4506815 )
        goto LABEL_36;
      result = a6(a1: v17, a2: &v6[2 * v18], a3, a4: &v6[2 * v18], a5: v11, a6: v14);
      if ( *(int *)(v7 + 16) <= 0 )
        return sub_18277F280(a1: v21, a2: v22, a3: v20);
      return result;
    case 4288437:
      v17 = SLOBYTE(v6[2 * v15 + 1]);
      goto LABEL_13;
    case 4288459:
      v17 = SLOWORD(v6[2 * v15 + 1]);
      goto LABEL_13;
    case 4288481:
      v17 = LOWORD(v6[2 * v15 + 1]);
      goto LABEL_13;
    default:
      goto LABEL_36;
  }
}
