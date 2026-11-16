// sub_27526C0
// rva 0x027526c0  size 222  section .text  group text
// window base 0x1827526c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27526C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(__int64, __int64, __int64, __int64, _DWORD *, _DWORD *))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v17 > *(_QWORD *)(v7 + 8) )
  {
    if ( a5 != v6 && a5[2] == 2 )
    {
      v9 = (unsigned int)a5[3];
      if ( (_DWORD)v9 == 0
        || (v10 = v6[2 * v9] >> 3,
            a2 = v6[2 * v10 + 11] & (0x1032u >> HIBYTE(v6[2 * v10 + 11])),
            (_DWORD)(a4 = (unsigned __int16)v6[2 * (unsigned int)v6[2 * v10 + 5] + 3 + a2]) == 4146) )
      {
        v11 = (unsigned int)a5[4];
        if ( (_DWORD)v11 == 0
          || (v12 = v6[2 * v11] >> 3,
              a2 = (unsigned int)v6[2 * v12 + 11],
              a1 = (unsigned int)a2 & (0x110Bu >> HIBYTE(v6[2 * v12 + 11])),
              (_DWORD)(a4 = (unsigned __int16)v6[2 * (unsigned int)v6[2 * v12 + 5] + 3 + a1]) == 4363) )
        {
          result = a6(a1, a2, a3, a4, a5: &v6[2 * v9], a6: &v6[2 * v11]);
          if ( *(int *)(v7 + 16) <= 0 )
            return sub_277F280(a1: v15, a2: v16, a3: v14);
          return result;
        }
      }
    }
    sub_2756FC0();
  }
  sub_1EB84E0();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_27527A0();
}
