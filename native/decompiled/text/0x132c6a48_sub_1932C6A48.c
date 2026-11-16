// sub_1932C6A48
// rva 0x132c6a48  size 269  section .text  group text
// window base 0x1932c6a48: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932C6A48(_DWORD a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, unsigned __int16 a6)
{
  int v7; // ecx
  __int16 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  char v12; // al
  __int16 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r11
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 result; // rax

  v7 = *(_DWORD *)(a4 + 5904);
  v8 = *(_WORD *)(a4 + 5900) | (a6 << v7);
  if ( v7 <= 13 )
  {
    v13 = *(_WORD *)(a4 + 5900) | (a6 << v7);
    *(_DWORD *)(a4 + 5904) = v7 + 3;
  }
  else
  {
    v9 = *(unsigned int *)(a4 + 40);
    v10 = *(_QWORD *)(a4 + 16);
    *(_WORD *)(a4 + 5900) = v8;
    *(_BYTE *)(v9 + v10) = v8;
    v11 = *(_QWORD *)(a4 + 16);
    a3 = (unsigned int)(*(_DWORD *)(a4 + 40) + 1);
    v12 = *(_BYTE *)(a4 + 5901);
    *(_DWORD *)(a4 + 40) = a3;
    *(_BYTE *)(a3 + v11) = v12;
    LOBYTE(v11) = 16 - *(_BYTE *)(a4 + 5904);
    ++*(_DWORD *)(a4 + 40);
    v13 = a6 >> v11;
    *(_DWORD *)(a4 + 5904) -= 13;
  }
  *(_WORD *)(a4 + 5900) = v13;
  sub_1932C6BD0(a1: a5, a2, a3, a4);
  *(_BYTE *)(*(unsigned int *)(a4 + 40) + *(_QWORD *)(a4 + 16)) = v14;
  v17 = *(_QWORD *)(a4 + 16);
  v18 = (unsigned int)(*(_DWORD *)(a4 + 40) + 1);
  *(_DWORD *)(a4 + 40) = v18;
  *(_BYTE *)(v18 + v17) = BYTE1(v14);
  v19 = *(_QWORD *)(a4 + 16);
  v20 = (unsigned int)(*(_DWORD *)(a4 + 40) + 1);
  *(_DWORD *)(a4 + 40) = v20;
  *(_BYTE *)(v20 + v19) = ~(_BYTE)v14;
  v21 = *(_QWORD *)(a4 + 16);
  v22 = (unsigned int)(*(_DWORD *)(a4 + 40) + 1);
  *(_DWORD *)(a4 + 40) = v22;
  *(_BYTE *)(v22 + v21) = (unsigned __int16)~(_WORD)v14 >> 8;
  result = (unsigned int)(*(_DWORD *)(a4 + 40) + 1);
  *(_DWORD *)(a4 + 40) = result;
  if ( (_DWORD)v14 != 0 )
    result = sub_1932CA15B(a1: v14, a2: v15, a3: v16, a4: *(_QWORD *)(a4 + 16) + (unsigned int)result, a5: v14);
  *(_DWORD *)(a4 + 40) += v14;
  return result;
}
