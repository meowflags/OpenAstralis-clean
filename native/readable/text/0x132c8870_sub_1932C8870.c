// sub_132C8870
// rva 0x132c8870  size 123  section .text  group text
// window base 0x1932c8870: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132C8870(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // [rsp+0h] [rbp-248h] BYREF
  _BYTE v15[528]; // [rsp+20h] [rbp-228h] BYREF
  __int64 v16; // [rsp+230h] [rbp-18h]

  v5 = __imp_KERNEL32.dll!GetTempPathW(a1, a2, a3: v15, a4: 261);
  if ( v5 - 1 > 0x104 )
    (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD))(*(_QWORD *)a4 + 1304LL))(
      a1: v6,
      a2: v7,
      a3: 0,
      a4,
      a5: 0);
  else
    (*(void (__fastcall **)(__int64, __int64, _BYTE *, __int64, _QWORD))(*(_QWORD *)a4 + 1304LL))(
      a1: v6,
      a2: v7,
      a3: v15,
      a4,
      a5: v5);
  return sub_132C8DE0(a1: v9, a2: v10, a3: v8, a4: (unsigned __int64)&v14 ^ v16, a5: v11, a6: v12);
}
