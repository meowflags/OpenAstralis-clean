// JNU_IsInstanceOfByName
// rva 0x132b0f1c  size 147  section .text  group text
// window base 0x1932b0f1c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall JNU_IsInstanceOfByName(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdi
  unsigned int v12; // ebx
  __int64 v13; // rsi

  if ( (*(int (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a4 + 208LL))(a1: a4, a2, a3: 1) < 0 )
    return 0xFFFFFFFFLL;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v7 + 48LL))(
         a1: v7,
         a2: v8,
         a3: a5,
         a4: v7);
  if ( v9 == 0 )
    return 0xFFFFFFFFLL;
  v12 = (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v10 + 256LL))(
          a1: v10,
          a2: v9,
          a3,
          a4: v10,
          a5: v9);
  (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v11 + 184LL))(
    a1: v11,
    a2: v13,
    a3: v13,
    a4: v11);
  return v12;
}
