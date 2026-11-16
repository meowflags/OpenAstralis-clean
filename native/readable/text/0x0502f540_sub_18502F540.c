// sub_502F540
// rva 0x0502f540  size 185  section .text  group text
// window base 0x18502f540: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_502F540(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // r15
  unsigned int (*v6)(void); // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v12; // [rsp+8h] [rbp-10h]
  unsigned int v13; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v5 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_15;
  }
  v6 = (unsigned int (*)(void))(v3 + *(_QWORD *)(v4 + 8LL * (*a3 >> 3) + 264));
  v13 = *a3 >> 3;
  v12 = a3;
  if ( v6() != 0 )
  {
    if ( *(int *)(v5 + 16) <= 0 )
      sub_277F280(a1: v7, a2: v8, a3: v12);
    return v4;
  }
  if ( *(__int16 *)(v4 + 8LL * v13 + 62) < 3
    || *(_DWORD *)(v4 + 8LL * *(unsigned int *)(v4 + 8LL * v13 + 16) + 20) != 70129 )
  {
    v10 = (unsigned int)v12[3];
    if ( (_DWORD)v10 != 0 )
    {
      result = v4 + 8LL * *(unsigned int *)(v4 + 8 * v10 + 4);
      goto LABEL_9;
    }
LABEL_15:
    sub_2771080();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_502F600();
  }
  result = v4 + 377212568;
LABEL_9:
  if ( *(int *)(v5 + 16) <= 0 )
    return sub_277F280();
  return result;
}
