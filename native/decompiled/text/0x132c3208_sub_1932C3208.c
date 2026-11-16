// sub_1932C3208
// rva 0x132c3208  size 226  section .text  group text
// window base 0x1932c3208: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932C3208(__int64 a1, __int64 a2, _DWORD a3, __int64 a4)
{
  _QWORD *v6; // rdi
  __int64 v7; // rax
  void (__fastcall **v8)(_QWORD *, _QWORD, __int64, _QWORD); // rsi
  _QWORD *v9; // r14
  __int64 v10; // rdx
  int v11; // r12d
  _QWORD *v12; // rbp
  _QWORD *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  _QWORD *v17; // rdi

  if ( (unsigned int)sub_1932C39D8(a1, a2) != 0 )
    return 4294967294LL;
  v6 = (_QWORD *)(a4 + 40);
  v7 = *(_QWORD *)(a4 + 40);
  v8 = (void (__fastcall **)(_QWORD *, _QWORD, __int64, _QWORD))(a4 + 56);
  v9 = (_QWORD *)(a4 + 64);
  v10 = *(_QWORD *)(v7 + 16);
  v11 = *(_DWORD *)(v7 + 8);
  if ( v10 != 0 )
    (*v8)(a1: v6, a2: v8, a3: v10, a4: *v9);
  v12 = (_QWORD *)(a4 + 40);
  v13 = v6;
  v14 = *(_QWORD *)(*v6 + 104LL);
  if ( v14 != 0 )
  {
    (*v8)(a1: v6, a2: v8, a3: v14, a4: *v9);
    v13 = v12;
  }
  v15 = *(_QWORD *)(*v6 + 96LL);
  if ( v15 != 0 )
  {
    (*v8)(a1: v6, a2: v8, a3: v15, a4: *v9);
    v6 = v13;
  }
  v16 = *(_QWORD *)(*v6 + 80LL);
  if ( v16 != 0 )
    (*v8)(a1: v6, a2: v8, a3: v16, a4: *v9);
  (*v8)(a1: v6, a2: v8, a3: *v6, a4: *v9);
  *v17 = 0;
  if ( v11 != 113 )
    JUMPOUT(0x32651D2C9LL);
  return 4294967293LL;
}
