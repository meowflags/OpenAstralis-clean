// sub_182781D40
// rva 0x02781d40  size 486  section .text  group text
// window base 0x182781d40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182781D40(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11)
{
  __int64 v11; // r13
  _DWORD *v12; // r14
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  unsigned __int64 v26; // r8
  __int64 result; // rax
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rbp
  int v30; // edx
  int v31; // ecx
  int v32; // edi
  int v33; // esi
  int v34; // r8d
  int v35; // r9d
  char v36; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v37; // [rsp+10h] [rbp-28h]
  int v38; // [rsp+1Ch] [rbp-1Ch]
  _DWORD *v39; // [rsp+20h] [rbp-18h]
  __int64 v40; // [rsp+28h] [rbp-10h]
  _DWORD *v41; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v36 <= *(_QWORD *)(v13 + 8) )
  {
    v40 = a3;
    MEMORY[0x181EB83C0]();
  }
  else if ( (_DWORD *)a5 != v12 )
  {
    v41 = (_DWORD *)a5;
    v14 = *(unsigned int *)(a5 + 4);
    if ( (_DWORD)v14 == 0 )
      return sub_182781E82(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    *(_DWORD *)(a5 + 4) = v12[2 * v14 + 4];
    if ( (*(_DWORD *)a5 & 2) != 0 )
    {
      v29 = (a5 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a5 & 0xFFFFFFFFFFF80000LL) + ((a5 - v29) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a5 & 0xFFFFFFFFFFF80000LL) + ((a5 - v29) >> 9) + 0x38) = 0;
    }
    v40 = a3;
    v12[2 * v14 + 4] = 0;
    v39 = &v12[2 * v14];
    v38 = v14;
    sub_1827814A0(a1, a2, a3: v39, a4: (__int64)v39, a5: 0, a6, a7: v36);
    ((void (__fastcall *)(__int64, __int64, _DWORD *, __int64, _QWORD))(v11
                                                                      + *(_QWORD *)&v12[2 * (v12[2 * v38] >> 3) + 36]))(
      a1: v16,
      a2: v17,
      a3: v39,
      a4: v15,
      a5: 0);
    while ( 1 )
    {
      v26 = (unsigned __int64)v41;
      result = (unsigned int)v41[1];
      if ( (_DWORD)result == 0 )
        break;
      v41[1] = v12[2 * result + 4];
      if ( (*(_DWORD *)v26 & 2) != 0 )
      {
        v28 = (v26 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v26 & 0xFFFFFFFFFFF80000LL) + ((v26 - v28) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v26 & 0xFFFFFFFFFFF80000LL) + ((v26 - v28) >> 9) + 0x38) = 0;
      }
      v12[2 * result + 4] = 0;
      v37 = &v12[2 * result];
      v38 = result;
      sub_1827814A0(a1: v20, a2: v21, a3: v37, a4: (__int64)v37, a5: 0, a6: v22, a7: v36);
      ((void (__fastcall *)(__int64, __int64, _DWORD *, __int64, _QWORD))(v11
                                                                        + *(_QWORD *)&v12[2 * (v12[2 * v38] >> 3) + 36]))(
        a1: v24,
        a2: v25,
        a3: v37,
        a4: v23,
        a5: 0);
    }
    if ( *(int *)(v13 + 16) <= 0 )
      return sub_18277F280(a1: v20, a2: v21, a3: v18, a4: v19);
    return result;
  }
  sub_18276EFE0(a1, a2, a3, a4, a5, a6, a7: v36);
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_182781F40(a1: v32, a2: v33, a3: v30, a4: v31, a5: v34, a6: v35, a7);
}
