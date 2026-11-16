// sub_185054780
// rva 0x05054780  size 208  section .text  group text
// window base 0x185054780: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185054780(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r9
  __int64 (__fastcall *v9)(__int64, __int64, _DWORD *, _DWORD *, __int64, __int64); // rax
  __int64 result; // rax
  __int64 v11; // [rsp+0h] [rbp-18h] BYREF
  __int64 v12; // [rsp+8h] [rbp-10h]
  _DWORD *v13; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v7 + 8) )
  {
    v12 = a5;
    v13 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( (unsigned __int16)*(_DWORD *)(v6
                                        + 8LL * *(unsigned int *)(v6 + 8LL * (*a3 >> 3) + 20)
                                        + 4LL
                                        * (*(_DWORD *)(v6 + 8LL * (*a3 >> 3) + 44)
                                         & (0x1E9Du >> HIBYTE(*(_DWORD *)(v6 + 8LL * (*a3 >> 3) + 44))))
                                        + 12) == 7837 )
  {
    v8 = *a3 >> 3;
    v9 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, __int64, __int64))(v5
                                                                                        + *(_QWORD *)(v6 + 8 * v8 + HIWORD(*(_DWORD *)(v6 + 8LL * *(unsigned int *)(v6 + 8 * v8 + 20) + 4LL * (*(_DWORD *)(v6 + 8 * v8 + 44) & (0x1E9Du >> HIBYTE(*(_DWORD *)(v6 + 8 * v8 + 44)))) + 12)) + 992));
    v13 = a3;
    v12 = a5;
    result = v9(a1, a2, a3, a4: a3, a5: v6 + 377214696, a6: a5);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  MEMORY[0x182770780]();
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
  return sub_185054860();
}
