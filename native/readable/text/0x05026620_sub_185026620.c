// sub_5026620
// rva 0x05026620  size 123  section .text  group text
// window base 0x185026620: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5026620(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  _DWORD *v10; // rcx
  __int64 (__fastcall *v11)(__int64, __int64, _DWORD *); // rax
  __int64 result; // rax
  __int64 v13; // [rsp+0h] [rbp-18h] BYREF
  __int64 v14; // [rsp+8h] [rbp-10h]
  __int64 v15; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v7 + 8) )
  {
    v14 = a5;
    v15 = a3;
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_50266A0();
  }
  else
  {
    v8 = *(unsigned int *)(v7 + 72);
    if ( (_DWORD)v8 != 0 )
      goto LABEL_4;
    do
    {
      v8 = sub_2771080();
LABEL_4:
      v9 = (unsigned int)v6[2 * v8 + 18];
      if ( (_DWORD)v9 != 0 )
        v10 = &v6[2 * v9];
      else
        v10 = &v6[2 * v8];
    }
    while ( v10 == v6 );
    v15 = a3;
    v11 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v5 + *(_QWORD *)&v6[2 * (*v10 >> 3) + 32]);
    v14 = a5;
    result = v11(a1, a2, a3: v10);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
