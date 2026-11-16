// sub_274ABA0
// rva 0x0274aba0  size 223  section .text  group text
// window base 0x18274aba0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_274ABA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(__int64, __int64, __int64, __int64, _DWORD *))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_19;
  if ( a5 == v6 )
    goto LABEL_18;
  if ( a5[2] != 2 )
    goto LABEL_18;
  v8 = (unsigned int)a5[3];
  if ( (_DWORD)v8 == 0 )
    goto LABEL_18;
  v9 = v6[2 * v8] >> 3;
  switch ( v9 )
  {
    case 4260808:
      v10 = (unsigned int)v6[2 * v8 + 1];
LABEL_7:
      v11 = (unsigned int)a5[4];
      if ( (_DWORD)v11 != 0 )
      {
        a4 = v6[2 * v11] >> 3;
        if ( (_DWORD)a4 != 4819999 )
          goto LABEL_18;
      }
      result = a6(a1, a2, a3: v10, a4, a5: &v6[2 * v11]);
      if ( *(int *)(v7 + 16) <= 0 )
        return sub_277F280(a1: v14, a2: v15, a3: v13);
      return result;
    case 4288437:
      v10 = (unsigned int)SLOBYTE(v6[2 * v8 + 1]);
      goto LABEL_7;
    case 4288459:
      v10 = (unsigned int)SLOWORD(v6[2 * v8 + 1]);
      goto LABEL_7;
    case 4288481:
      v10 = LOWORD(v6[2 * v8 + 1]);
      goto LABEL_7;
    default:
LABEL_18:
      sub_2757000(a1, a2, a3: a5);
LABEL_19:
      sub_1EB84E0();
      __builtin_debugtrap();
      return sub_274AC80();
  }
}
