// sub_4F18280
// rva 0x04f18280  size 102  section .text  group text
// window base 0x184f18280: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F18280(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64, _DWORD *, _DWORD *, __int64, _QWORD); // rax
  __int64 result; // rax
  _QWORD v11[2]; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v12; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)v11 <= *(_QWORD *)(v7 + 8) )
  {
    v12 = a3;
    sub_1EB84E0();
  }
  else if ( a5 != v6 )
  {
    v8 = *(unsigned int *)(a5 + 8);
    v9 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, __int64, _QWORD))(v5
                                                                                       + *(_QWORD *)(v6 + 8LL * (*a3 >> 3) + 144));
    v12 = a3;
    v11[1] = a5;
    result = v9(a1: v8, a2, a3, a4: a3, a5, a6: 0);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  sub_2771080();
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
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_4F18300();
}
