// sub_1932C41F0
// rva 0x132c41f0  size 177  section .text  group text
// window base 0x1932c41f0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932C41F0(_DWORD a1, __int64 a2, _DWORD a3, __int64 a4)
{
  int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 result; // rax

  v5 = *(_DWORD *)(a4 + 116);
  *(_DWORD *)(a4 + 88) = 2 * *(_DWORD *)(a4 + 68);
  *(_WORD *)(*(_QWORD *)(a4 + 104) + 2LL * (unsigned int)(v5 - 1)) = 0;
  sub_1932CA161(a1: 0, a2, a3: 0, a4: *(_QWORD *)(a4 + 104), a5: 2LL * (unsigned int)(*(_DWORD *)(a4 + 116) - 1));
  v6 = *(int *)(a4 + 172);
  *(_DWORD *)(a4 + 5916) = v7;
  v6 *= 2;
  *(_DWORD *)(a4 + 168) = *(unsigned __int16 *)(8 * v6 + 0x85F42);
  *(_DWORD *)(a4 + 180) = *(unsigned __int16 *)(8 * v6 + 0x85F40);
  *(_DWORD *)(a4 + 184) = *(unsigned __int16 *)(8 * v6 + 0x85F44);
  *(_DWORD *)(a4 + 164) = *(unsigned __int16 *)(8 * v6 + 0x85F46);
  result = (unsigned int)(v7 + 2);
  *(_DWORD *)(a4 + 160) = result;
  *(_DWORD *)(a4 + 136) = result;
  *(_QWORD *)(a4 + 144) = v7;
  *(_DWORD *)(a4 + 132) = v7;
  *(_DWORD *)(a4 + 156) = v7;
  *(_DWORD *)(a4 + 5896) = v7;
  *(_DWORD *)(a4 + 112) = v7;
  return result;
}
