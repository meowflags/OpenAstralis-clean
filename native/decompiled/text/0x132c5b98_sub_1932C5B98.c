// sub_1932C5B98
// rva 0x132c5b98  size 251  section .text  group text
// window base 0x1932c5b98: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932C5B98(__int64 a1, _DWORD a2, unsigned int a3, _QWORD *a4, _BYTE *a5, int a6)
{
  __int64 (__fastcall *v8)(); // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  int v13; // esi
  int v14; // r8d
  int v15; // r9d
  unsigned int v16; // eax
  __int64 v17; // rdi
  unsigned int v18; // esi

  if ( a5 == nullptr || *a5 != 49 || a6 != 88 )
    return 4294967290LL;
  if ( a4 == nullptr )
    return 4294967294LL;
  v8 = (__int64 (__fastcall *)())a4[6];
  a4[4] = 0;
  if ( v8 != nullptr )
  {
    v9 = a4[8];
  }
  else
  {
    v8 = sub_1932C7E50;
    a4[8] = 0;
    a4[6] = sub_1932C7E50;
    v9 = 0;
  }
  if ( a4[7] == 0 )
    a4[7] = sub_1932C0654;
  v10 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))v8)(a1, a2: a3, a3: 1, a4: v9, a5: 7152);
  if ( v10 == 0 )
    return 4294967292LL;
  sub_1932CA161(a1: v10, a2: v11, a3: 0, a4: v10, a5: 7152);
  a4[5] = v12;
  *(_QWORD *)v12 = a4;
  *(_QWORD *)(v12 + 64) = 0;
  *(_DWORD *)(v12 + 8) = 16180;
  v16 = sub_1932C5CC0(a1: v12, a2: v13, a3: v13, (_DWORD)a4, a5: v14, a6: v15);
  v18 = v16;
  if ( v16 != 0 )
  {
    ((void (__fastcall *)(__int64, _QWORD, __int64, _QWORD))a4[7])(a1: v17, a2: v16, a3: v17, a4: a4[8]);
    a4[5] = 0;
  }
  return v18;
}
