// sub_502F7E0
// rva 0x0502f7e0  size 134  section .text  group text
// window base 0x18502f7e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_502F7E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 (__fastcall *v8)(__int64, __int64, _DWORD *); // rcx
  __int64 result; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v13; // [rsp+10h] [rbp-18h]
  int v14; // [rsp+1Ch] [rbp-Ch]
  __int64 v15; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v7 + 8) )
  {
    v15 = a3;
    sub_1EB84E0();
  }
  else if ( a5 != v6 )
  {
    v15 = a3;
    v8 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v5 + *(_QWORD *)&v6[2 * (*a5 >> 3) + 32]);
    v14 = *a5 >> 3;
    v13 = a5;
    result = v8(a1, a2, a3: a5);
    if ( (_DWORD *)result != v6 )
      result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v5 + *(_QWORD *)&v6[2 * v14 + 52]))(
                 a1: v10,
                 a2: v11,
                 a3: v13);
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
  return sub_502F880();
}
