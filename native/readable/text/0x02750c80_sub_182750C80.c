// sub_2750C80
// rva 0x02750c80  size 539  section .text  group text
// window base 0x182750c80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2750C80(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        __int64 (__fastcall *a8)(__int64, __int64, _QWORD, __int64, _QWORD, double, double))
{
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v9 + 8) )
    goto LABEL_38;
  if ( a7 == v8 )
    goto LABEL_37;
  if ( a7[2] != 4 )
    goto LABEL_37;
  v10 = (unsigned int)a7[3];
  if ( (_DWORD)v10 == 0 )
    goto LABEL_37;
  v11 = v8[2 * v10] >> 3;
  switch ( v11 )
  {
    case 4260452:
      *(float *)&a3 = (float)*(__int64 *)&v8[2 * v10 + 2];
      break;
    case 4260808:
      *(float *)&a3 = (float)(int)v8[2 * v10 + 1];
      break;
    case 4279946:
      *(_QWORD *)&a3 = (unsigned int)v8[2 * v10 + 1];
      break;
    case 4288437:
      *(float *)&a3 = (float)SLOBYTE(v8[2 * v10 + 1]);
      break;
    case 4288459:
      *(float *)&a3 = (float)SLOWORD(v8[2 * v10 + 1]);
      break;
    case 4288481:
      *(float *)&a3 = (float)LOWORD(v8[2 * v10 + 1]);
      break;
    default:
      goto LABEL_37;
  }
  v12 = (unsigned int)a7[4];
  if ( (_DWORD)v12 == 0 )
    goto LABEL_37;
  if ( v8[2 * v12] >> 3 != 4261917 )
    goto LABEL_37;
  v13 = (unsigned int)a7[5];
  if ( (_DWORD)v13 == 0 )
    goto LABEL_37;
  v14 = v8[2 * v13] >> 3;
  switch ( v14 )
  {
    case 4260452:
      *(float *)&a4 = (float)*(__int64 *)&v8[2 * v13 + 2];
      goto LABEL_12;
    case 4260808:
      *(float *)&a4 = (float)(int)v8[2 * v13 + 1];
      goto LABEL_12;
    case 4279946:
      *(_QWORD *)&a4 = (unsigned int)v8[2 * v13 + 1];
LABEL_12:
      v15 = (unsigned int)a7[6];
      if ( (_DWORD)v15 == 0 )
        goto LABEL_37;
      v16 = v8[2 * v15] >> 3;
      if ( (_DWORD)v16 != 4261917 )
        goto LABEL_37;
      result = a8(a1, a2, a3: LOBYTE(v8[2 * v12 + 1]), a4: v16, a5: LOBYTE(v8[2 * v15 + 1]), a6: a3, a7: a4);
      if ( *(int *)(v9 + 16) <= 0 )
        return sub_277F280(a1: v19, a2: v20, a3: v18);
      return result;
    case 4288437:
      *(float *)&a4 = (float)SLOBYTE(v8[2 * v13 + 1]);
      goto LABEL_12;
    case 4288459:
      *(float *)&a4 = (float)SLOWORD(v8[2 * v13 + 1]);
      goto LABEL_12;
    case 4288481:
      *(float *)&a4 = (float)LOWORD(v8[2 * v13 + 1]);
      goto LABEL_12;
    default:
LABEL_37:
      sub_2757000(a1, a2, a3: a7);
LABEL_38:
      sub_1EB84E0();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_2750EA0();
  }
}
