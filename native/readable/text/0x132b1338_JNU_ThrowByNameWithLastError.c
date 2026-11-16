// JNU_ThrowByNameWithLastError
// rva 0x132b1338  size 125  section .text  group text
// window base 0x1932b1338: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall JNU_ThrowByNameWithLastError(_DWORD a1, _DWORD a2, int a3, __int64 a4, int a5, int a6)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 result; // rax
  int v12; // edi
  __int64 v13; // rsi
  __int64 v14; // [rsp+0h] [rbp-28h]
  __int64 v15; // [rsp+8h] [rbp-20h]
  __int64 v16; // [rsp+10h] [rbp-18h]
  __int64 v17; // [rsp+18h] [rbp-10h]

  v7 = sub_132B8AE0(a1: a3, a2: a5, a3, a4, a5, a6);
  if ( v7 != 0 )
  {
    v10 = JNU_NewObjectByName(a1: v8, a2: v9, a3: v8, a4, a5: 542640, a6: v7, a7: v14, a8: v15, a9: v16, a10: v17);
    if ( v10 != 0 )
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 104LL))(a1: v8, a2: v9, a3: v10, a4);
  }
  result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 1824LL))(
             a1: v8,
             a2: v9,
             a3: *(_QWORD *)(*(_QWORD *)a4 + 1824LL),
             a4);
  if ( (_BYTE)result == 0 )
    return JNU_ThrowByName(a1: v12, a2: v13, a3: v12, a4, a5: v13);
  return result;
}
