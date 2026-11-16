// sub_1932B20C8
// rva 0x132b20c8  size 229  section .text  group text
// window base 0x1932b20c8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932B20C8(_DWORD a1, __int64 a2, _DWORD a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // rdi
  __int64 v7; // rsi
  int v8; // edx
  __int64 *v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rsi

  if ( (*(int (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a4 + 208LL))(a1: a4, a2, a3: 2) < 0 )
    return 0;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v6 + 1408LL))(
          a1: v6,
          a2: v7,
          a3: a5,
          a4: v6);
  if ( v10 == 0 )
    return 0;
  v11 = JNU_ClassString(a1: (__int64)v9, a2: v10, a3: v8, a4: v9);
  if ( v11 == 0 )
    return 0;
  (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v12 + 1664LL))(
    a1: v12,
    a2: v13,
    a3: v13,
    a4: v12,
    a5: 0,
    a6: a5);
  v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)v14 + 224LL))(
          a1: v14,
          a2: v15,
          a3: v11,
          a4: v14,
          a5: MEMORY[0x337608],
          a6: v15);
  (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v16 + 184LL))(
    a1: v16,
    a2: v18,
    a3: v18,
    a4: v16);
  return v17;
}
