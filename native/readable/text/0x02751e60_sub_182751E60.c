// sub_2751E60
// rva 0x02751e60  size 156  section .text  group text
// window base 0x182751e60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2751E60(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(__int64, __int64, __int64, _DWORD *, _DWORD *, _DWORD *))
{
  __int64 v6; // rbx
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_2751F00();
  }
  else
  {
    if ( a5 == v7
      || a5[2] != 2
      || (_DWORD)(v10 = (unsigned int)a5[3]) != 0 && (_DWORD)(v6 = v7[2 * v10] >> 3) != 4291287
      || (_DWORD)(v6 = (unsigned int)a5[4]) != 0
      && ((v11 = v7[2 * v6] >> 3, SHIWORD(v7[2 * v11 + 15]) < 2) || v7[2 * v7[2 * v11 + 4] + 4] != 43998) )
    {
      a6 = (__int64 (__fastcall *)(__int64, __int64, __int64, _DWORD *, _DWORD *, _DWORD *))sub_2756FC0();
    }
    result = a6(a1, a2, a3, a4: &v7[2 * v10], a5: &v7[2 * v10], a6: &v7[2 * v6]);
    if ( *(int *)(v8 + 16) <= 0 )
      return sub_277F280(a1: v14, a2: v15, a3: v13);
  }
  return result;
}
