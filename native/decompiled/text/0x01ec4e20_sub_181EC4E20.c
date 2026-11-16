// sub_181EC4E20
// rva 0x01ec4e20  size 155  section .text  group text
// window base 0x181ec4e20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EC4E20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdx
  _DWORD *v10; // rdx
  __int64 v11; // rcx
  __int64 result; // rax
  char v13; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v13);
LABEL_13:
    MEMORY[0x1828C1C40](a1, a2, a3: v6 + 92852146);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_181EC4EC0();
  }
  v8 = *(unsigned int *)(v7 + 72);
  if ( (_DWORD)v8 != 0 )
  {
    v9 = (unsigned int)v6[2 * v8 + 18];
    if ( (_DWORD)v9 != 0 )
      v10 = &v6[2 * v9];
    else
      v10 = &v6[2 * v8];
  }
  else
  {
    v10 = v6;
  }
  if ( v10 != v6 )
  {
    v11 = *v10 >> 3;
    result = (__int64)&v6[2 * v6[2 * v11 + 5]];
    if ( (unsigned __int16)*(_DWORD *)(result + 4LL * (v6[2 * v11 + 11] & (0x21Bu >> HIBYTE(v6[2 * v11 + 11]))) + 12) == 539 )
      goto LABEL_13;
  }
  if ( *(int *)(v7 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
