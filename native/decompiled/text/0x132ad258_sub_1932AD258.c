// sub_1932AD258
// rva 0x132ad258  size 122  section .text  group text
// window base 0x1932ad258: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932AD258(_DWORD a1, _DWORD a2, __int64 a3, _QWORD *a4, _DWORD *a5, __int64 a6)
{
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rdi
  _DWORD *v11; // rsi
  int v12; // edi
  int v13; // esi
  int v14; // r9d

  v8 = MEMORY[0x79280](a1: a3, a2: a6, a3, a4: a3);
  if ( v8 == 0 )
    return sub_1932ACA14(a1: v10, a2: (__int64)v11, a3: v10, a4, a5, a6: v11);
  if ( v8 != 2 )
  {
    MEMORY[0x793D8](a1: v10, a2: v11, a3: v9, a4: v8);
    sub_1932AED04(a1: v12, a2: v13, a3: 534024, (_DWORD)a4, a5: 538216, a6: v14);
  }
  return 0;
}
