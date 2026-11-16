// sub_27501C0
// rva 0x027501c0  size 218  section .text  group text
// window base 0x1827501c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27501C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(__int64, __int64, __int64, __int64, _QWORD, _DWORD *))
{
  __int64 v6; // rbx
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_27502A0();
  }
  if ( a5 != v7 && a5[2] == 2 )
  {
    v10 = (unsigned int)a5[3];
    if ( (_DWORD)v10 != 0 )
    {
      v6 = v7[2 * v10] >> 3;
      switch ( (_DWORD)v6 )
      {
        case 0x4103C8:
          v11 = (unsigned int)v7[2 * v10 + 1];
LABEL_7:
          v6 = (unsigned int)a5[4];
          if ( (_DWORD)v6 == 0 )
            goto LABEL_10;
          v12 = v7[2 * v6] >> 3;
          if ( SHIWORD(v7[2 * v12 + 15]) >= 3 && v7[2 * v7[2 * v12 + 4] + 5] == 82938 )
            goto LABEL_10;
          break;
        case 0x416FB5:
          v11 = (unsigned int)SLOBYTE(v7[2 * v10 + 1]);
          goto LABEL_7;
        case 0x416FCB:
          v11 = (unsigned int)SLOWORD(v7[2 * v10 + 1]);
          goto LABEL_7;
        case 0x416FE1:
          v11 = LOWORD(v7[2 * v10 + 1]);
          goto LABEL_7;
        default:
          break;
      }
    }
  }
  a6 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, _QWORD, _DWORD *))sub_2756FC0();
LABEL_10:
  result = a6(a1, a2, a3, a4: v11, a5: (unsigned int)v11, a6: &v7[2 * v6]);
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280(a1: v15, a2: v16, a3: v14);
  return result;
}
