// sub_505B740
// rva 0x0505b740  size 303  section .text  group text
// window base 0x18505b740: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_505B740(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v13; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v14; // [rsp+8h] [rbp-10h]

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4: a3);
  }
  else if ( (unsigned __int16)*(_DWORD *)(v8
                                        + 8LL * *(unsigned int *)(v8 + 8LL * (*a3 >> 3) + 20)
                                        + 4LL
                                        * (*(_DWORD *)(v8 + 8LL * (*a3 >> 3) + 44)
                                         & (0x1ECEu >> HIBYTE(*(_DWORD *)(v8 + 8LL * (*a3 >> 3) + 44))))
                                        + 12) == 7886 )
  {
    if ( *a3 >> 3 != 5414848 )
    {
LABEL_10:
      sub_276FC00(a1, a2, a3, a4: a3, a5: v8 + 43319120);
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
      return sub_505B880();
    }
    v10 = (unsigned int)a3[7];
    if ( (_DWORD)v10 == 0 )
      return sub_18505B7CE(a1, a2, (_DWORD)a3, a4: v8, a5, a6, a7, a8);
    v14 = a3;
    v11 = v8 + 8 * v10;
    if ( *(int *)(v9 + 16) <= 0 )
      sub_277F280(a1, a2, a3: v11, a4: v14);
    return v11;
  }
  sub_2770780(a1, a2, a3, a4: a3);
  goto LABEL_10;
}
