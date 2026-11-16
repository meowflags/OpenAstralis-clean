// sub_181EC3DC0
// rva 0x01ec3dc0  size 226  section .text  group text
// window base 0x181ec3dc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_181EC3DC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  char v12; // [rsp+0h] [rbp-18h] BYREF
  __int64 v13; // [rsp+8h] [rbp-10h]
  __int64 v14; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v7 + 8) )
  {
    v14 = a5;
    v13 = a3;
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v12);
    goto LABEL_21;
  }
  if ( a3 == v6 )
  {
    v14 = a5;
    v13 = a3;
    if ( *(int *)(v7 + 16) > 0 )
      return;
LABEL_18:
    MEMORY[0x18277F280]();
    return;
  }
  v8 = *(unsigned int *)(a3 + 28);
  if ( (_DWORD)v8 == 0 )
  {
    v14 = a5;
    v13 = a3;
    goto LABEL_11;
  }
  if ( *(_DWORD *)(v6 + 8 * v8 + 56) == 47076830 )
  {
LABEL_21:
    v14 = a5;
    v13 = a3;
    goto LABEL_11;
  }
  v14 = a5;
  v13 = a3;
  v9 = MEMORY[0x184F636E0]();
  if ( v9 != v6 )
  {
    while ( 1 )
    {
      v10 = v14;
      while ( v10 != v6 )
      {
        if ( v9 == v10 )
          goto LABEL_6;
        if ( *(int *)(v7 + 16) <= 0 )
        {
          v9 = MEMORY[0x18277F280](a1, a2, a3: v10, a4, a5: v6 + 8LL * *(unsigned int *)(v10 + 4));
          v10 = v11;
        }
        else
        {
          v10 = v6 + 8LL * *(unsigned int *)(v10 + 4);
        }
      }
LABEL_11:
      v9 = sub_181EC3EC0(a1, a2, a3: v13, a4, a5: v6, a6, a7: v12);
    }
  }
LABEL_6:
  if ( *(int *)(v7 + 16) <= 0 )
    goto LABEL_18;
}
