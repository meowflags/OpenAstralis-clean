// sub_18274ECC0
// rva 0x0274ecc0  size 159  section .text  group text
// window base 0x18274ecc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18274ECC0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        void (__fastcall *a6)(__int64, __int64, __int64, _DWORD *, _DWORD *, _DWORD *))
{
  __int64 v6; // rbx
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v16; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    return sub_18274ED60();
  }
  else
  {
    if ( a5 == v7
      || a5[2] != 2
      || (_DWORD)(v10 = (unsigned int)a5[3]) != 0 && (_DWORD)(v6 = v7[2 * v10] >> 3) != 4555298
      || (_DWORD)(v6 = (unsigned int)a5[4]) != 0
      && ((v11 = v7[2 * v6] >> 3, SHIWORD(v7[2 * v11 + 15]) < 3) || v7[2 * v7[2 * v11 + 4] + 5] != 27575) )
    {
      a6 = (void (__fastcall *)(__int64, __int64, __int64, _DWORD *, _DWORD *, _DWORD *))sub_182756FC0();
    }
    a6(a1, a2, a3, a4: &v7[2 * v10], a5: &v7[2 * v10], a6: &v7[2 * v6]);
    if ( *(int *)(v8 + 16) <= 0 )
      sub_18277F280(a1: v13, a2: v14, a3: v12);
    return (__int64)v7;
  }
}
