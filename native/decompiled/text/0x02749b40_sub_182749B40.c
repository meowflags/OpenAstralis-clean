// sub_182749B40
// rva 0x02749b40  size 230  section .text  group text
// window base 0x182749b40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_182749B40(
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
  __int64 v11; // rcx
  __int64 v12; // rbp
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v18; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  if ( a5 == v7
    || a5[2] != 2
    || (_DWORD)(v6 = (unsigned int)a5[3]) != 0
    && (v10 = v7[2 * v6] >> 3,
        a2 = (unsigned int)v7[2 * v10 + 11],
        a1 = (unsigned int)a2 & (0x1006u >> HIBYTE(v7[2 * v10 + 11])),
        (unsigned __int16)v7[2 * (unsigned int)v7[2 * v10 + 5] + 3 + a1] != 4102)
    || (_DWORD)(v11 = (unsigned int)a5[4]) != 0
    && ((v12 = v7[2 * v11] >> 3, SHIWORD(v7[2 * v12 + 15]) < 2) || v7[2 * v7[2 * v12 + 4] + 4] != 95996) )
  {
    a6 = (__int64 (__fastcall *)(__int64, __int64, __int64, _DWORD *, _DWORD *, _DWORD *))sub_182756FC0();
  }
  v13 = a6(a1, a2, a3, a4: &v7[2 * v11], a5: &v7[2 * v6], a6: &v7[2 * v11]);
  if ( *(int *)(v8 + 16) <= 0 )
    v13 = sub_18277F280(a1: v15, a2: v16, a3: v14);
  if ( v13 != 0 )
    JUMPOUT(0x304E92BF2LL);
  return v7 + 8781820;
}
